/*
   Author: Benjamin Low

   Date: August 2016

   Description:

       Code for an Arduino Mega slave.

       For a Night Festival 2016 installation at the National Museum of Singapore
       called 'Into Pulsar' by artist Ryf Zaini.

       Three bicycles placed at the bottom of a 'tree'. User cycles any of these to trigger the
       28 x ebike wheels on top of the tree to go faster and 4 x 4m led strips to react in
       brightness and color.

       The master mega reads the three hall sensor values and and sends it to the slave
       via pwm output to an analog input pin on the slave mega. The master also controls
       the 4 strips of LEDs. The master and slave mega each only has 15 pwn pins
       to control 14 motor controllers each. The slave just controls 14 motor controllers.

       PWM pins 2, ..., 13, 38, 39, 40
*/

#define motorPin1 2
#define motorPin2 3
#define motorPin3 4
#define motorPin4 5
#define motorPin5 6
#define motorPin6 7
#define motorPin7 8
#define motorPin8 9
#define motorPin9 10
#define motorPin10 11
#define motorPin11 12
#define motorPin12 13
#define motorPin13 38
#define motorPin14 39

#define motorInPin A0

int myMaxRPM, myPrevMaxRPM;

void setup() {

  Serial.begin(9600);

  pinMode(motorInPin, INPUT);

  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(motorPin5, OUTPUT);
  pinMode(motorPin6, OUTPUT);
  pinMode(motorPin7, OUTPUT);
  pinMode(motorPin8, OUTPUT);
  pinMode(motorPin9, OUTPUT);
  pinMode(motorPin10, OUTPUT);
  pinMode(motorPin11, OUTPUT);
  pinMode(motorPin12, OUTPUT);
  pinMode(motorPin13, OUTPUT);
  pinMode(motorPin14, OUTPUT);
}

void loop() {
    
  myMaxRPM = analogRead(motorInPin);

  control_motor_speed();
}

void control_motor_speed() {

  if (myMaxRPM != myPrevMaxRPM) {
    analogWrite(motorPin1, myMaxRPM);
    analogWrite(motorPin2, myMaxRPM);
    analogWrite(motorPin3, myMaxRPM);
    analogWrite(motorPin4, myMaxRPM);
    analogWrite(motorPin5, myMaxRPM);
    analogWrite(motorPin6, myMaxRPM);
    analogWrite(motorPin7, myMaxRPM);
    analogWrite(motorPin8, myMaxRPM);
    analogWrite(motorPin9, myMaxRPM);
    analogWrite(motorPin10, myMaxRPM);
    analogWrite(motorPin11, myMaxRPM);
    analogWrite(motorPin12, myMaxRPM);
    analogWrite(motorPin13, myMaxRPM);
    analogWrite(motorPin14, myMaxRPM);
  }
  myPrevMaxRPM = myMaxRPM;
}
