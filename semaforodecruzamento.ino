//Semáforo de cruzamento

int red1 = 13;
int red2 = 10;
int yellow1 = 12;
int yellow2 = 9;
int green1 = 11;
int green2 = 8;
 
void setup() {
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}
 
void loop() {
    //amarelo do primeiro
  digitalWrite(vermelho_1, LOW);
  digitalWrite(amarelo_1, HIGH);
  digitalWrite(verde_1, LOW);
 
  //amarelo do segundo
  digitalWrite(vermelho_2, LOW);
  digitalWrite(amarelo_2, HIGH);
  digitalWrite(verde_2, LOW);
 
  delay(2000);

  // apaga o amarelo e liga o vermelho do primeiro
  digitalWrite(amarelo_1, LOW);
  digitalWrite(vermelho_1, HIGH);
 
  // apaga o amarelo e liga o verde do segundo
  digitalWrite(amarelo_2, LOW);
  digitalWrite(verde_2, HIGH);
 
  //fechado 1 e aberto 2
  delay(5000);  
 
  // apaga o vermelho e liga o verde do primeiro
  digitalWrite(verde_1, HIGH);
  digitalWrite(vermelho_1, LOW);
 
  // apaga o verde e liga o vermelho do segundo
  digitalWrite(verde_2, LOW);
  digitalWrite(vermelho_2, HIGH);
 
  delay(5000);
}