
int ledPin1 =12;
int ledPin2 = 8;
int ledPin3 = 7;
int trigPin = 9;

int echoPin1 = 10;
int echoPin2 = 13;
int echoPin3 = 6;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
  pinMode(echoPin3, INPUT);
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
//  digitalWrite(12, HIGH);
//    digitalWrite(7, HIGH);
//  digitalWrite(13, HIGH);

}

void loop() {

  int duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin1, HIGH);
distance= duration*0.034/2;

   int duration2, distance2;
//digitalWrite(trigPin, LOW);
//delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration2 = pulseIn(echoPin2, HIGH);
distance2= duration2*0.034/2;

 
    int duration3, distance3;
//digitalWrite(trigPin, LOW);
//delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration3 = pulseIn(echoPin3, HIGH);
distance3= duration3*0.034/2;


      if (distance < 5) {  // Change the number for long or short distances. 
    digitalWrite (ledPin1, LOW);
  } else {
    digitalWrite (ledPin1, HIGH);
  }
 
      if (distance2 <5) {  // Change the number for long or short distances. 
    digitalWrite (ledPin2, LOW);
  } else {
    digitalWrite (ledPin2, HIGH);
  }
    
      if (distance3 < 5) {  // Change the number for long or short distances. 
    digitalWrite (ledPin3, LOW);
  } else {
    digitalWrite (ledPin3, HIGH);
  }
    



  }
// Code ends here.
