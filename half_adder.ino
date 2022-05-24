int gnd = 10;
String stringread(){
  char chari;
  String stro = "";
  while(Serial.available() > 0) {
    chari = Serial.read();
    delay(5);
    stro += chari;
  }
  return stro;
}
void setup() {

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(10, OUTPUT);

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0){

    String led = stringread();
    delay(50);
    Serial.println(led);
    if (led == "00\n"){
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
    }
    if (led == "10\n"){
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
    }
    if (led == "01\n"){
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
    }
    if (led == "11\n"){
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }
    
  }
}
