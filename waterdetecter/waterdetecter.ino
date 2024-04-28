int water = 0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}
void loop()
{
  water = analogRead(A0);
  if (water > 105){
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  delay(50);
}