#define BUZZER_PIN 3
#define LDR_PIN A0

void setup() {
pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
//SOS
int val, frequency;
val = analogRead(LDR_PIN);
frequency = map(val, 0, 1023, 3500, 4500);
for (int i = 0; i < 2; i++) {
tone(BUZZER_PIN, frequency, 20);
delay(1000);
}
for (int i = 0; i < 2; i++) {
tone(BUZZER_PIN, frequency, 200);
delay(1000);
}
}