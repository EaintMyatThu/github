int pinState;
void setup() {
  pinMode(10,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  pinState=digitalRead(10);
  Serial.println(pinState);
  delay(100);
  
  // put your main code here, to run repeatedly:

}
