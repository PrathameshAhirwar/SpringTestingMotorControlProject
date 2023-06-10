#define UP A0
#define DOWN A1
const int stepPin = 3;
const int dirPin = 2;
int Steps_per_Rot = 200;
int NoOfRotation = 1;


void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(UP,INPUT_PULLUP);
  pinMode(DOWN,INPUT_PULLUP);
  //  pinMode(enPin,OUTPUT);
  //  digitalWrite(enPin,LOW);
  Serial.begin(115200);
//  Keyboard.begin();
  delay(1000);
}
int delayUs = 820;

int StepsToRotate=0;
void loop() {
  while(!Serial.available()){
    while(digitalRead(UP)==LOW){
      digitalWrite(dirPin, HIGH); //Forwared
      Serial.println("Forward ");
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(delayUs);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(delayUs);

    }
      while(digitalRead(DOWN)==LOW){
        Serial.println("Reverse ");
      digitalWrite(dirPin, LOW); //Forwared
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(delayUs);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(delayUs);
    
    }
  }
  String str=Serial.readString();
  StepsToRotate=str.toInt();
  Serial.println(StepsToRotate);
  if(StepsToRotate>0)
    digitalWrite(dirPin, HIGH); //Forwared
  else
  {
    digitalWrite(dirPin, LOW); //Forwared  
    StepsToRotate=StepsToRotate*-1;
  }
  for (int x = 0; x < StepsToRotate; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(delayUs);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(delayUs);
  }
//  digitalWrite(stepPin, LOW);

}
