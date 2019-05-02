//
const int trig1 = 9;
const int echo1 = 10;
const int echo2 = 13;
const int echo3 = 11;
int led1=A3;
int led2=A4;
int led3=A5;
const int trig2 = 6;
const int echo4 = 5;
const int echo5 = 4;
const int echo6 = 3;
int led4=A0;
int led5=A1;
int led6=A2;
// defines variables
long duration1;
int distance1;
long duration2;
int distance2;
long duration3;
int distance3;
long duration4;
int distance4;
long duration5;
int distance5;
long duration6;
int distance6;

void setup() {
pinMode(trig1, OUTPUT); // Sets the trigPin as an Output
pinMode(echo1, INPUT); // Sets the echoPin as an Input
pinMode(led1,OUTPUT);
pinMode(echo2, INPUT); // Sets the echoPin as an Input
pinMode(led2,OUTPUT);
pinMode(echo3, INPUT); // Sets the echoPin as an Input
pinMode(led3,OUTPUT);
pinMode(trig2,OUTPUT);
pinMode(echo4, INPUT); // Sets the echoPin as an Input
pinMode(led4,OUTPUT);
pinMode(echo5, INPUT); // Sets the echoPin as an Input
pinMode(led5,OUTPUT);
pinMode(echo6, INPUT); // Sets the echoPin as an Input
pinMode(led6,OUTPUT);

analogWrite(led1,255);
analogWrite(led2,255);
analogWrite(led3,255);

analogWrite(led4,255);
analogWrite(led5,255);
analogWrite(led6,255);
digitalWrite(trig1, HIGH);
delayMicroseconds(10);
digitalWrite(trig2, HIGH);
delayMicroseconds(10);

Serial.begin(9600); // Starts the serial communication
}


void loop() {
 // loop2();
digitalWrite(trig1, LOW);
delayMicroseconds(10);
digitalWrite(trig1, HIGH);
delayMicroseconds(10);
digitalWrite(trig1, LOW);
echocalc1();echocalc2();
digitalWrite(trig1, LOW);
delayMicroseconds(10);
digitalWrite(trig1, HIGH);
delayMicroseconds(10);
digitalWrite(trig1, LOW);
echocalc2();echocalc3();
digitalWrite(trig1, LOW);
delayMicroseconds(10);
digitalWrite(trig1, HIGH);
delayMicroseconds(10);
digitalWrite(trig1, LOW);
echocalc3();echocalc1();
//Serial.println(distance1);Serial.println(distance2);Serial.println(distance3);
//************************************************//
}

void echocalc1(){
distance1= pulseIn(echo1, HIGH)*0.034/2;
//
if (distance1 <= 5){
  digitalWrite(led1, LOW);
}
else{
  digitalWrite(led1, HIGH);
}
}
////////////////////////////////////
void echocalc2(){
distance2= pulseIn(echo2, HIGH)*0.034/2;

if (distance2 <= 5){
  digitalWrite(led2, LOW);
}
else{
  digitalWrite(led2, HIGH);
}
}
/////////////////////////////////////
void echocalc3(){
distance3= pulseIn(echo3, HIGH)*0.034/2;
if (distance3 <= 5){
  digitalWrite(led3, LOW);
}
else{
  digitalWrite(led3, HIGH);
}
}
