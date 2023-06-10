 #include "HX711.h"

const int DOUT_PIN = 5;
const int SCK_PIN = 4;

HX711 scale;

void setup() {
  Serial.begin(9600);
  scale.begin(DOUT_PIN, SCK_PIN);
  scale.set_scale(83613.25966850828); // This value depends on the calibration of your load cell
  scale.tare(0);
}

void loop() {
  float weight = scale.get_units();
  Serial.print("Weight: ");
  Serial.print(weight, 3);  // Print weight with 2 decimal places
  Serial.println(" g");
  delay(3000);
}
