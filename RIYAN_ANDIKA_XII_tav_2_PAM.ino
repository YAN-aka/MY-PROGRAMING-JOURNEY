const int ledMerah = 19;
const int ledKuning = 18;
const int ledHijau = 5;
const int buzzer = 17;

void setup() {
  Serial.begin(115200);
  pinMode(ledMerah ,OUTPUT);
  pinMode(ledKuning ,OUTPUT);
  pinMode(ledHijau ,OUTPUT);
  pinMode(buzzer , OUTPUT);
}
void loop() {
  // LED Merah menyala,buzzer berbunyi
  digitalWrite(ledMerah,HIGH);
  tone(buzzer,1000);
  delay(1000);

  //LED MERAH mati ,LED Kuning menyala
  digitalWrite(ledMerah,LOW);
  digitalWrite(ledKuning ,HIGH);
  noTone(buzzer);
  delay(1000);

  //LED Kuning mati,LED Hijau menyala
  digitalWrite(ledKuning,LOW);
  digitalWrite(ledHijau,HIGH);
  delay(1000);

  //LED Hijau mati
  digitalWrite(ledHijau,LOW);
  delay(1000);
  tone(buzzer,2000);
  delay(2000);
   noTone(buzzer);
   

}
