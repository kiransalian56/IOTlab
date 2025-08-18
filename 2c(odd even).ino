void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
}
void loop(){
//  digitalWrite(2,HIGH);
//  delay(500);
//  digitalWrite(2,LOW);
//  delay(500);
//
//   digitalWrite(3,HIGH);
//  delay(500);
//  digitalWrite(3,LOW);
//  delay(500);
//
//   digitalWrite(4,HIGH);
//  delay(500);
//  digitalWrite(4,LOW);
//  delay(500);
//
//   digitalWrite(5,HIGH);
//  delay(500);
//  digitalWrite(5,LOW);
//  delay(500);
//
//   digitalWrite(6,HIGH);
//  delay(500);
//  digitalWrite(6,LOW);
//  delay(500);
int arr[6]={2,3,4,5,6};
for(int i=0;i<5;i++){
  if(i%2==0){
  digitalWrite(arr[i],HIGH);
  }
  else{
  digitalWrite(arr[i],LOW);
  }
  
}
delay(500);
for(int i=0;i<5;i++){
  if(i%2!=0)
  {
  digitalWrite(arr[i],HIGH);
  }
  else{
  digitalWrite(arr[i],LOW);
  }
 
}
 delay(500);
//for(int i=3;i>0;i--){
//  if(i%2==0){
//  digitalWrite(arr[i],HIGH);
//  delay(500);
//  digitalWrite(arr[i],LOW);
//  delay(500);
//}
//}
}
