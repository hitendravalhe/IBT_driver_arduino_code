#define RPWM 5
#define LPWM 6
#define REN 8
#define LEN 9

void setup() {
  pinMode(RPWM, OUTPUT);
  pinMode(LPWM, OUTPUT);
  pinMode(REN, OUTPUT);
  pinMode(LEN, OUTPUT);
}

void loop() {
  // Move motors forward at half speed
  analogWrite(RPWM, 127);
  analogWrite(LPWM, 127);
  digitalWrite(REN, HIGH);
  digitalWrite(LEN, HIGH);
  delay(2000);

  // Stop both motors
  analogWrite(RPWM, 0);
  analogWrite(LPWM, 0);
  digitalWrite(REN, LOW);
  digitalWrite(LEN, LOW);
  delay(2000); 

  // Move motors backward at half speed
  analogWrite(RPWM, 127);
  analogWrite(LPWM, 127);
  digitalWrite(REN, LOW);
  digitalWrite(LEN, LOW);
  delay(2000); 

  // Stop both motors
  analogWrite(RPWM, 0);
  analogWrite(LPWM, 0);
  digitalWrite(REN, LOW);
  digitalWrite(LEN, LOW);
  delay(2000); 
}
