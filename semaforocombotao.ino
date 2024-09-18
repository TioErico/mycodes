//Semáforo com botão para pedestres
int vermelho = 13;
int amarelo = 12;
int verde = 11;
int botao = 10;
 
void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(botao, INPUT); //defina o botão como entrada, ao contrário dos leds
 
  digitalWrite(verde, HIGH); //verde deve ficar ligado por padrão
  digitalWrite(vermelho, LOW); //vermelho e amarelo desligados por padrão
  digitalWrite(amarelo, LOW);
}
 
void loop() {
  if (digitalRead(botao) == HIGH) { //se o botão for pressionado
    delay(2000); //espere 2 segundos
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, HIGH);
    digitalWrite(verde, LOW);

    delay(2000);
 
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho, HIGH);

    delay(5000);  
 
    digitalWrite(verde, HIGH);
    digitalWrite(vermelho, LOW);
 
    delay(5000);
  }
}