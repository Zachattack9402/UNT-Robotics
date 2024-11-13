int front_r_1 = 2; //pin A on L298N
int front_r_2 = 3; //pin B on L298N
int front_l_1 = 4; //pin C on L298N
int front_l_2 = 5; //pin D on L298N
int back_r_1 = 6; //pin A on L298N
int back_r_2 = 7; //pin B on L298N
int back_l_1 = 8; //pin C on L298N
int back_l_2 = 9; //pin D on L298N
int button = 53;

int rot_detect = 10;
int r;

int t = 500;
int button_press;

void setup() {
  // put your setup code here, to run once:
  pinMode(front_r_1,OUTPUT);
  pinMode(front_r_2,OUTPUT);
  pinMode(front_l_1,OUTPUT);
  pinMode(front_l_2,OUTPUT);
  pinMode(back_r_1,OUTPUT);
  pinMode(back_r_2,OUTPUT);
  pinMode(back_l_1,OUTPUT);
  pinMode(back_l_2,OUTPUT);

  pinMode(button,INPUT);
  //button_press = digitalRead(button);
}

void loop() {
  // put your main code here, to run repeatedly:
    motor_off();

  while(digitalRead(button)) 
  {
    move_forward(t);
    delay(500);
    move_back(t);
    turn_left();
    turn_right();
    delay(500);
    return 0;
  }
}
void move_forward(int t){
  digitalWrite(front_r_1,LOW);
  digitalWrite(front_r_2,HIGH);
  digitalWrite(front_l_1,LOW);
  digitalWrite(front_l_2,HIGH);
  digitalWrite(back_r_1,LOW);
  digitalWrite(back_r_2,HIGH);
  digitalWrite(back_l_1,LOW);
  digitalWrite(back_l_2,HIGH);
    delay(t);
  digitalWrite(front_r_1,LOW);
  digitalWrite(front_r_2,LOW);
  digitalWrite(front_l_1,LOW);
  digitalWrite(front_l_2,LOW);
  digitalWrite(back_r_1,LOW);
  digitalWrite(back_r_2,LOW);
  digitalWrite(back_l_1,LOW);
  digitalWrite(back_l_2,LOW);
    return 0;
}
void move_back(int t){
  digitalWrite(front_r_1,HIGH);
  digitalWrite(front_r_2,LOW);
  digitalWrite(front_l_1,HIGH);
  digitalWrite(front_l_2,LOW);
  digitalWrite(back_r_1,HIGH);
  digitalWrite(back_r_2,LOW);
  digitalWrite(back_l_1,HIGH);
  digitalWrite(back_l_2,LOW);
    delay(t);
  digitalWrite(front_r_1,LOW);
  digitalWrite(front_r_2,LOW);
  digitalWrite(front_l_1,LOW);
  digitalWrite(front_l_2,LOW);
  digitalWrite(back_r_1,LOW);
  digitalWrite(back_r_2,LOW);
  digitalWrite(back_l_1,LOW);
  digitalWrite(back_l_2,LOW);
    return 0;
}
void turn_left(void){

}

void turn_right(void){
  
}

void motor_off(void){
  digitalWrite(front_r_1,LOW);
  digitalWrite(front_r_2,LOW);
  digitalWrite(front_l_1,LOW);
  digitalWrite(front_l_2,LOW);
  digitalWrite(back_r_1,LOW);
  digitalWrite(back_r_2,LOW);
  digitalWrite(back_l_1,LOW);
  digitalWrite(back_l_2,LOW);
}

