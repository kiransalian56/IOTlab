int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  // read the state of the pushbutton value
  buttonState = digitalRead(2);
  // check if pushbutton is pressed.  if it is, the
  // buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(3, HIGH);
  } else {
    // turn LED off
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}