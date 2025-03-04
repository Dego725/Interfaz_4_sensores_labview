/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground through 220 ohm resistor

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
const int analogInPin0 = A0;  // Analog input pin that the potentiometer is attached to
int sensorValue0 = 0;  // value read from the pot
int outputValue0 = 0;  // value output to the PWM (analog out)

const int analogInPin1 = A1;  // Analog input pin that the potentiometer is attached to
int sensorValue1 = 0;  // value read from the pot
int outputValue1 = 0;  // value output to the PWM (analog out)

const int analogInPin2 = A2;  // Analog input pin that the potentiometer is attached to
int sensorValue2 = 0;  // value read from the pot
int outputValue2 = 0;  // value output to the PWM (analog out)

const int analogInPin3 = A3;  // Analog input pin that the potentiometer is attached to
int sensorValue3 = 0;  // value read from the pot
int outputValue3 = 0;  // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(115200);
}

void loop() {
  // read the analog in value:
  sensorValue0 = analogRead(analogInPin0);
  // map it to the range of the analog out:
  outputValue0 = map(sensorValue0, 0, 1023, 0, 255);

  sensorValue1 = analogRead(analogInPin1);
  // map it to the range of the analog out:
  outputValue1 = map(sensorValue1, 0, 1023, 0, 255);

  sensorValue2 = analogRead(analogInPin2);
  // map it to the range of the analog out:
  outputValue2 = map(sensorValue2, 0, 1023, 0, 255);
  
  sensorValue3 = analogRead(analogInPin3);
  // map it to the range of the analog out:
  outputValue3 = map(sensorValue3, 0, 1023, 0, 255);

  // print the results to the Serial Monitor:
  Serial.print(outputValue0);
  Serial.print(",");
  Serial.print(outputValue1);
  Serial.print(",");
  Serial.print(outputValue2);
  Serial.print(",");
  Serial.println(outputValue3);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(100);
}
