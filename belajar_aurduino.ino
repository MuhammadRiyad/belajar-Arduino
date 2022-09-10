int pinLED = 13;

    //nama kelompok : riyadh, lukman, rasya, rizki


void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Lampu siap!");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED, HIGH);
  Serial.println("wiiiiii");
  delay(250);
  digitalWrite(pinLED, LOW);
  Serial.println("wuuuuu");
  delay(250);
}
