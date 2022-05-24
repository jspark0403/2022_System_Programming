  int red = 3;
  int gnd = 10;
  int green = 4;
  int blue = 5;

void setup() {

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(10, LOW);
  char charactor = Serial.read();
  Serial.available() > 0;
  
  if (charactor == '3'){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }

  if (charactor == '4'){
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }

  if (charactor == '5'){
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }

  if (charactor == '6'){
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  }
  if (charactor == '7'){
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  }
  }
