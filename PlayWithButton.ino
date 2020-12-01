// ---------------------------------------------------------------------------
// Created by Gus Yudha on 17/05/2020
// ---------------------------------------------------------------------------

#define R 9
#define G 10
#define B 11

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
    int i;
    for ( i = 1; i <= 6; i++ ){
      Warna(i,i);
    }
}

void Warna (int id, int waktu) {
  int i,j,k;
  switch ( id ) {
    case 1: for ( i = 1; i <= 255; i+=50 ){for ( j = 1; j <= 255; j+=25 ){for ( k = 1; k <= 255; k++ )RGB(i,j,k,waktu);}}break;
    case 2: for ( i = 1; i <= 255; i+=50 ){for ( j = 1; j <= 255; j+=25 ){for ( k = 1; k <= 255; k++ )RGB(i,k,j,waktu);}} break;
    case 3: for ( i = 1; i <= 255; i+=50 ){for ( j = 1; j <= 255; j+=25 ){for ( k = 1; k <= 255; k++ )RGB(j,i,k,waktu);}} break;
    case 4: for ( i = 1; i <= 255; i+=50 ){for ( j = 1; j <= 255; j+=25 ){for ( k = 1; k <= 255; k++ )RGB(j,k,i,waktu);}} break;
    case 5: for ( i = 1; i <= 255; i+=50 ){for ( j = 1; j <= 255; j+=25 ){for ( k = 1; k <= 255; k++ )RGB(k,j,i,waktu);}} break;
    case 6: for ( i = 1; i <= 255; i+=50 ){for ( j = 1; j <= 255; j+=25 ){for ( k = 1; k <= 255; k++ )RGB(k,i,j,waktu);}} break;
    default: RGB(0,0,0,1);
  }
}