//Semáforo básico

int vermelho = 12;
int amarelo = 11;
int verde = 10;
 
void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}
 
void loop() {
  //inicia com o sinal amarelo
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
 
  delay(2000);
 
  //apaga amarelo e liga o vermelho
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);

  delay(5000);  
 
  //apaga o vermelho e liga o verde
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
 
  delay(5000);
}