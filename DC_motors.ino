

void setup() {
  // put your setup code here, to run once:


pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

forward();
}

void forward() 
{
analogWrite(6,100); // The speed value of the left motor//
analogWrite(7,0);

analogWrite(8,100); //The speed value of the right motor//
analogWrite(9,0);
}
