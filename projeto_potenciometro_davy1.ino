// C++ code
// Davy Pinheiro

int portaPotenciometro = A0;
int valorPotenciometro = 0;
int ledVermelho = 3;
int beep = 4;

void setup(){
  Serial.begin(9600);
  pinMode (ledVermelho, OUTPUT);
  pinMode (beep, OUTPUT);
}

void loop(){
  valorPotenciometro = analogRead(portaPotenciometro);
  Serial.println(valorPotenciometro);
  int brilho = map(valorPotenciometro, 0, 1023, 0, 255);
  analogWrite(ledVermelho, brilho);
  
  if (valorPotenciometro >= 700){
    digitalWrite (ledVermelho, HIGH);
  } else {
     digitalWrite (ledVermelho, LOW);
  }
  
  if (valorPotenciometro >= 700){
    digitalWrite (beep, HIGH);
  } else {
     digitalWrite (beep, LOW);
}  
  delay(10);
  }