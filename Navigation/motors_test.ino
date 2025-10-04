// Motor pins (H-bridge)
int motorA1 = 7;
int motorA2 = 6;
int motorB1 = 5;
int motorB2 = 4;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);

  // Move forward
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);


}

void loop() {
  // Do nothing (run only once)
}
