  int red = 3;
  int gnd = 10;
  int green = 4;
  int blue = 5;

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
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0){

    String led = stringread();
    delay(50);
    Serial.println(led);
    if (led == "red\n"){
      digitalWrite(red, HIGH);
      digitalWrite(gnd, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
    }
    if (led == "off\n"){
      digitalWrite(red, LOW);
      digitalWrite(gnd, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
    }
    if (led == "green\n"){
      digitalWrite(red, LOW);
      digitalWrite(gnd, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
    }
    if (led == "blue\n"){
      digitalWrite(red, LOW);
      digitalWrite(gnd, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(blue, HIGH);
    }
    
  }
}
