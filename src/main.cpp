#include <Arduino.h>

#include <ChipLib4.h>
#include <MBlueBotLib.h>

// const
const int SPEED_MAX = 200;
const int SPEED_MINUS = 50;
const int SPEED_TURN = 100;

// prototypes

// les Obj
DigitalOut led_13(13);

Note son("C%3", 300);

Buzzer buzzer(8);

MBlueButton button;

MBlueLineSensor lineSensor(MEPORT::PORT_2);

MBlueUltrasonic ultrasonic(MEPORT::PORT_3);

MBlueMotors motors;

// var global

//**************
void setup()
{
  Serial.begin(9600);
  // todo
}
//
//**********
void loop()
{
  // todo
}
// fin
