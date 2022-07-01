// Declaración de variables
int PWMA = 6;
int INA = 7;
int INB = 8;
int INC = 9;
int IND = 10;
int PWMB = 11;
int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(INA, OUTPUT);
  pinMode(INB, OUTPUT);
  pinMode(INC, OUTPUT);
  pinMode(IND, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Motor Derecha
  digitalWrite(INA, LOW);
  digitalWrite(INB, HIGH);
  analogWrite(PWMA, 128);

  // Motor Izquierda
  digitalWrite(INC, LOW);
  digitalWrite(IND, HIGH);
  analogWrite(PWMB, 128);

//  digitalWrite(LED, HIGH);
//  delay(500);
//  digitalWrite(LED, LOW);
//  delay(500);
}
