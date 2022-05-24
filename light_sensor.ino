int analogValue = 0;


void setup() {
Serial.begin(9600);
pinMode(8, OUTPUT);
pinMode(A0, INPUT);
}

void loop() {
  analogValue = analogRead(0);
  Serial.println(analogValue);
  if(analogValue<350){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }
 
}
