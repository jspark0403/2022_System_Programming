int pos_pins[] = {1,2,3,4}; 
int num_of_pos = 4;
int pins[] = {5,6,7,8,9,10,11,12}; // 세그먼트 a, b, c, d, e, f, g, dp
int num_of_pins = 8;
int delaytime = 5;

bool segment[10][8] = {
  {true, true, true, true, true, true, false, false}, //0
  {false, true, true, false, false, false, false, false}, //1
  {true, true, false, true, true, false, true, false}, //2
  {true, true, true, true, false, false, true, false}, //3
  {false, true, true, false, false, true, true, false}, //4
  {true, false, true, true, false, true, true, false}, //5
  {true, false, true, true, true, true, true, false}, //6
  {true, true, true, false, false, false, false, false}, //7
  {true, true, true, true, true, true, true, false}, //8
  {true, true, true, true, false, true, true, false} //9
};

void setup() {
  for(int i=0; i<num_of_pos; i++) {
     pinMode(pos_pins[i], OUTPUT);
  }
  for(int i=0; i<num_of_pins; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  int num[] = {4,4,4,4};
  digits_4_seven_segment(num);
}

void set_position(int pos){
  for(int i = 0; i < 4; i++) {
    if(i + 1 == pos){
      digitalWrite(pos_pins[i], LOW);
    } else {
      digitalWrite(pos_pins[i], HIGH);
    }
  }
}

void set_number(int number){
  for(int i=0;i<num_of_pins;++i){ 
    segment[number][i] ? digitalWrite(pins[i], HIGH) : digitalWrite(pins[i], LOW); 
  }
}

void set_seven_segment(int pos, int number){
  set_position(pos);
  set_number(number);
}

void digits_4_seven_segment(int num[]){
  for(int i=0;i<num_of_pos;++i){
    set_seven_segment(i+1,num[i]);
    delay(delaytime);
  }
}
