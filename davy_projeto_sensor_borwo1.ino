// C++
// Davy Pinheiro

int led = 3;
int portaSensor = A0;
int valorSensor = 0;

void setup() {
  
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  
  valorSensor = analogRead(portaSensor);
  Serial.println(valorSensor);
  delay(100);
  
  if(valorSensor < 637) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  
}