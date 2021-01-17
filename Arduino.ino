
void setup() {
Serial.begin(9600);  // put your setup code here, to run once:

pinMode(A5,INPUT);   // This will be conected to the slave arduino.
pinMode(3,OUTPUT);  // this will be connected to the Master  ARduino.
}

void loop() {
  // put your main code here, to run repeatedly:
  // In master Arduino, you can write, if sonar distance is <100. then put analogWrite(3,0);......
  // in slave arduino, if(analogpin_data==0,  then execute whatever you want.
  // Second conditin will be , if analogpin_data<100.... then same execute what you want...)
  // it is in the range of 120-280.
  // third will be at 255 when we are recieving more than 300.
  
  analogWrite(3,255);  // we can use 0-255.
Serial.println(analogRead(A5));
delay(100);

}
