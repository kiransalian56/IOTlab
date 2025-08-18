// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
}

void loop()
{
  int arr[5]={2,3,4,5,6};
 /* digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)*/
  for(int i=0;i<5;i++){
  digitalWrite(arr[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(arr[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  

  }
    for(int i=3;i>0;i--){
  digitalWrite(arr[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(arr[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
    }

  
}