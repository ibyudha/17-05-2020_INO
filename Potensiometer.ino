// ---------------------------------------------------------------------------
// Created by Gus Yudha on 18/05/2020
// ---------------------------------------------------------------------------

#define lampuLED 9 // LED di Pin PWM
#define potensio A5 // Potensiometer di Pin analog 5

void setup() {
  Serial.begin(9600);
  pinMode ( lampuLED, OUTPUT );
  pinMode ( potensio, INPUT );
}

int besarHambatan = 0;

void loop() {
  besarHambatan = analogRead ( potensio );
  besarHambatan = map ( besarHambatan, 0, 1023, 0, 255 );
  Serial.print("Besar Hambatan: ");
  Serial.println(besarHambatan);
  analogWrite ( lampuLED, besarHambatan );