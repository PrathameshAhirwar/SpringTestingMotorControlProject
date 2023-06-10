# Spring Testing with Motor Controller

This project is used to test different types of springs with the help of a stepper motor controlled by an Arduino Nano and a load cell. It provides a graphical user interface (GUI) for controlling the motor and capturing test data.

## Prerequisites

- Arduino Nano
- Stepper motor
- Load cell
- Serial communication cable
- Python 3
- Required Python packages: `serial`, `tkinter`, `openpyxl`, `matplotlib`, `PIL`

## Installation

1. Clone or download the project repository to your local machine.
2. Connect the Arduino Nano, stepper motor, and load cell according to the project requirements.
3. Connect the Arduino Nano to your computer using the serial communication cable.
4. Install the required Python packages by running the following command in the project directory:

```angular2html
pip install -r requirements.txt
```



## Usage

1. Open the `main.py` file in a text editor.
2. Uncomment the code block that establishes the serial connection with the Arduino Nano.
3. Uncomment the code block for initializing and saving data to an Excel file (if required).
4. Save the `main.py` file.
5. Run the `run.bat` file to start the motor controller GUI.


```angular2html
run.bat
```


6. In the GUI window, select the appropriate COM port for the Arduino Nano.
7. Enter the required parameters, such as displacement, halt time, and maximum/minimum load.
8. Click the "Connect" button to establish a connection with the Arduino Nano.
9. Click the "Start" button to initiate the motor movement and begin testing.
10. The load cell readings will be displayed in the GUI window, indicating the weight applied to the spring.
11. Once the testing is complete, click the "Stop" button to halt the motor movement.
12. Click the "Generate Graph" button to generate a graph of the test data using matplotlib.
13. The generated graph will be displayed in a separate window.

## Troubleshooting

- If the serial connection fails, ensure that the correct COM port is selected and that the Arduino Nano is properly connected.
- Check the wiring connections between the Arduino Nano, stepper motor, and load cell.
- Make sure that the required Python packages are installed correctly. Try reinstalling them if necessary.

## License

This project is licensed under the [MIT License](LICENSE).
