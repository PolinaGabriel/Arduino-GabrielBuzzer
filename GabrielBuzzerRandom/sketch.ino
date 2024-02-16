#define BUZZER_PIN 3
#define LDR_PIN A0

void setup() {
pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
//Пищит с рандомной продолжительностью
int val, frequency;
val = analogRead(LDR_PIN);
int st1 = 1;
int en1 = 20;
int a = rand() % (en1 - st1 + 1) + st1;
frequency = map(val, 0, 1023, 350, 450);
tone(BUZZER_PIN, frequency, a);
delay(100);
}