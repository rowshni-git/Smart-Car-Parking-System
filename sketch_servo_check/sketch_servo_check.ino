   #include <Servo.h> // include Servo library 
   Servo horizontal;
 // Servo verti;
   void setup()
{
  Serial.begin(9600);
  horizontal.attach(8);
   // verti.attach(8);
//  horizontal.write(0);
}
void loop() 
{
  horizontal.write(160);
//for(int i=20;i<170;i++){
//  horizontal.write(i);
//  delay(100);}
//
//  verti.write(20);
//for(int i=20;i<170;i++){
//  verti.write(i);
//  delay(100);}
//  


 
 delay(1000);
//}
}

