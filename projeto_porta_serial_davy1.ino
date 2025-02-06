int ledVerde = 4;
int ledAmarelo = 3;
int ledVermelho = 2;

void setup() {
  //configuração das portas lógicas.
   pinMode(ledVerde, OUTPUT);
   pinMode(ledAmarelo, OUTPUT);
   pinMode(ledVermelho, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  //recebe a leitura da porta lógica.   
  char opcao = Serial.read();
  
  if(opcao == 'a'){
    digitalWrite(ledVerde, HIGH);
  }else if(opcao == 'b'){
    digitalWrite(ledVerde, LOW);
  } else if(opcao == 'c'){
    digitalWrite(ledAmarelo, HIGH);
  } else if(opcao == 'd'){
    digitalWrite(ledAmarelo, LOW);
  } else if(opcao == 'e'){
    digitalWrite(ledVermelho, HIGH);
  } else if(opcao == 'f'){
    digitalWrite(ledVermelho, LOW);
  }
  
  delay(100);
}