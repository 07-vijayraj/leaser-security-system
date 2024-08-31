#define LED 4
#define Buzzer 13
#define LReceiver 5
#define Laser 16

void setup() {
  Serial.begin(115200);
  
  pinMode(LReceiver, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(Laser, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  digitalWrite(Laser, HIGH);
}

void loop() {
  bool value = digitalRead(LReceiver);
  Serial.println(value);

  if (value == 1) {
    digitalWrite(LED, HIGH);
    digitalWrite(Buzzer, HIGH);
  } else if (value == 0) {
    digitalWrite(LED, LOW);
    digitalWrite(Buzzer, LOW);
  }
}
