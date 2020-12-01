// ---------------------------------------------------------------------------
// Created by Gus Yudha on 24/05/2020
// ---------------------------------------------------------------------------

const int pingPin = 8;
const int echoPin = 7;

void setup() {
   Serial.begin(9600);
}

void loop() {
   long durasi, cm;
  
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
  
   pinMode(echoPin, INPUT);
   durasi = pulseIn(echoPin, HIGH);
  
   cm = microsecondsToCentimeters(durasi);
   Serial.print(cm);
   Serial.print(" cm");
   Serial.println();
  
   delay(100);
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}