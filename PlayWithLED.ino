// ---------------------------------------------------------------------------
// Created by Gus Yudha on 16/05/2020
// ---------------------------------------------------------------------------

#define led1 9
#define led2 10
int i = 0;
int levelTerang = 0;

void setup() {
  pinMode ( led1, OUTPUT );
  pinMode ( led2, OUTPUT );
}

void loop() {
  i = 1;
  levelTerang = 1;
  //Perulangan
  while ( i < 255 || levelTerang < 255 ) {
    levelTerang = levelTerang + i;
    //Pengkondisian
    if ( i % 2 == 0 ) {
      analogWrite ( led1, levelTerang );
      analogWrite ( led2, LOW );
      jeda();
    } else {
      analogWrite ( led1, LOW );
      analogWrite ( led2, levelTerang );
      jeda();
    }
    i += 5;
  }
}