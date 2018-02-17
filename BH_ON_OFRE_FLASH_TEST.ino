#define OUT_1 5
void setup() {
 pinMode(OUT_1, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite( OUT_1,LOW);
  delay(1000);
  digitalWrite( OUT_1,HIGH);
}
