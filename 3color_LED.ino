int RED_PIN = 5;
int GREEN_PIN = 6;
int BLUE_PIN = 9;

void setup() {
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
    analogWrite(RED_PIN, 5);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 0);
    delay(1000);
    
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 5);
    analogWrite(BLUE_PIN, 0);
    delay(1000); 

    analogWrite(RED_PIN,0);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 5);
    delay(1000); 
    
}
