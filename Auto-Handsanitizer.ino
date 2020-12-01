// ---------------------------------------------------------------------------
// Created by Gus Yudha on 19/05/2020
// ---------------------------------------------------------------------------

#include <Servo.h>
#define sensor 9

int trig = 3;
int echo = 4;

float durasi, jarak;

Servo myservo; 

int pos = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(10);
  myservo.write(80);
  pinMode ( trig, OUTPUT );
  pinMode ( echo, INPUT );
}

void loop() {
  digitalWrite (echo, HIGH);
  delayMicroseconds(2);
  digitalWrite (trig, LOW);
  delayMicroseconds(10);
  digitalWrite (trig, HIGH);
  durasi = pulseIn ( echo, HIGH );
  jarak = ((durasi *0.034)/2);
  Serial.println( jarak);
  if ( jarak <= 10 || jarak >= 1000 ){
    myservo.write (80);
    delay (1000);
  } else {
    myservo.write (240);
  }
  delay(200);
}
