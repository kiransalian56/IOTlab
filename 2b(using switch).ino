int status=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(9,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
status=digitalRead(2);
if(status==1){
  digitalWrite(9,HIGH);
}
else{
  digitalWrite(9,LOW);
}
}