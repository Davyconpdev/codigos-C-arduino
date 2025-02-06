// C++
// Davy Pinheiro
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  analogWrite(6, 51);
  analogWrite(3, 255);
  analogWrite(5, 255);
  delay(10); // Delay a little bit to improve simulation performance
}