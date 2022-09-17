
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;

batalkan pengaturan() {
 pinMode (LED1, OUTPUT);
 pinMode (LED2, OUTPUT);
 pinMode (LED3, OUTPUT);
 pinMode (LED4, OUTPUT);
 pinMode (LED5, OUTPUT);
 pinMode (LED6, OUTPUT);
}

lingkaran kosong() {
  digitalWrite(LED1, TINGGI);
  penundaan (200);
  digitalWrite(LED1, RENDAH);
  penundaan(50);
  digitalWrite(LED1, TINGGI);
  penundaan (200);
  digitalWrite(LED1, RENDAH);
  penundaan(50);
  digitalWrite(LED2, TINGGI);
  penundaan (200);
  digitalWrite(LED2, RENDAH);
  penundaan(50);
  digitalWrite(LED2, TINGGI);
  penundaan (200);
  digitalWrite(LED2, RENDAH);
  penundaan(50);
  digitalWrite(LED3, TINGGI);
  penundaan (200);
  digitalWrite(LED3, RENDAH);
  penundaan(50);
  digitalWrite(LED3, TINGGI);
  penundaan (200);
  digitalWrite(LED3, RENDAH);
  penundaan(50);
  digitalWrite(LED4, TINGGI);
  penundaan (200);
  digitalWrite(LED4, RENDAH);
  penundaan(50);
  digitalWrite(LED5, TINGGI);
  penundaan (200);
  digitalWrite(LED5, RENDAH);
  penundaan(50);
  digitalWrite(LED6, TINGGI);
  penundaan (200);
  digitalWrite(LED6, RENDAH);
  penundaan(50);
}
