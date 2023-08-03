#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <Servo.h>

LiquidCrystal_I2C lcd (0x27, 20, 4);

Servo myServo;

//MotorA
int mA_out1 = 2;
int mA_out2 = 3;
int mB_out1 = 4;
int mB_out2 = 5;

int trigPin = 10;    // TRIG pin
int echoPin = 9;    // ECHO pin

float duration_us, distance_cm;

void setup() {
  // put your setup code here, to run once:
  lcd.init(); //important to initiate the lcd
  lcd.begin(20,4);
  lcd.backlight();
  Serial.begin (9600);
  myServo.attach(11);
  lcd.setCursor(0,0);
  lcd.print("Robot Road Marker");
  delay(2000);
  lcd.clear();
 lcd.print("Initializing the ports...");
 delay(2000);
 lcd.clear();
  pinMode(trigPin, OUTPUT); // configure the trigger pin to output mode
  pinMode(echoPin, INPUT); // configure the echo pin to input mode
  pinMode(mA_out1, OUTPUT);
  pinMode(mA_out2, OUTPUT);
  pinMode(mB_out1, OUTPUT);
  pinMode(mB_out2, OUTPUT);

  lcd.print("done initializing");
  lcd.clear();
  delay(2000);
}

void loop() {
ultrSonic();
servoM ();
motors();
stop_motors();
}
