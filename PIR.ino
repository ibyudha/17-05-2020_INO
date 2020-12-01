// ---------------------------------------------------------------------------
// Created by Gus Yudha on 27/05/2020
// ---------------------------------------------------------------------------

long unsigned int inputLOW;
long unsigned int jeda = 5000;
boolean tetapkanLOW = true;
boolean lamaLOW;
int pirPin = 8;
int ledPin = 4;
void setup(){        //-----------------SETUP
    //Serial.begin(9600);
    pinMode(pirPin, INPUT);
    pinMode(ledPin, OUTPUT);
    digitalWrite(pirPin, LOW);
    delay(50);
}
void loop(){         //-----------------LOOP
    if(digitalRead(pirPin) == HIGH){
        digitalWrite(ledPin, HIGH);
      	//Serial.println("Ada yang Bergerak");
        if(tetapkanLOW){
            tetapkanLOW = false;
            delay(50);
        }
        lamaLOW = true;
    }
    if(digitalRead(pirPin) == LOW){
        digitalWrite(ledPin, LOW);
      	//Serial.println("Tidak Ada yang Bergerak");
        if(lamaLOW){
            inputLOW = millis();
            lamaLOW = false;       
        }
        if(!tetapkanLOW && millis() - inputLOW > jeda){
            tetapkanLOW = true;
            delay(50);
        }
    }
}