// defines pins numbers
int front_r_1 = 47; //pin A on L298N
int front_r_2 = 49; //pin B on L298N
int front_l_1 = 51; //pin C on L298N
int front_l_2 = 53; //pin D on L298N

const int trigPin = 10;
const int echoPin = 9;
// defines variables
long duration;
int distance;
int t = 1000;

bool forward;
bool backward;

void setup() {
  
  pinMode(front_r_1,OUTPUT);
  pinMode(front_r_2,OUTPUT);
  pinMode(front_l_1,OUTPUT);
  pinMode(front_l_2,OUTPUT);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);


  if(forwards){
//move forwards
    digitalWrite(front_r_1,HIGH);
    digitalWrite(front_r_2,LOW);
    digitalWrite(front_l_1,HIGH);
    digitalWrite(front_l_2,LOW);
  
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);
        duration = pulseIn(echoPin, HIGH);
        distance = duration * 0.034 / 2;

      if(distacne < 20){
        stop();
      }
      
    }

}

void stop(void){

  digitalWrite(front_r_1,LOW);
  digitalWrite(front_r_2,LOW);
  digitalWrite(front_l_1,LOW);
  digitalWrite(front_l_2,LOW);
  delay(20);

}