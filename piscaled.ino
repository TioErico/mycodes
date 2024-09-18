// Pisca led// Pisca led básico

int led = 12; //cria a variável "led" e atribui o valor 12 a ela (porta 12)

void setup() {
  pinMode(led, OUTPUT); //define o led (porta 12) como saída
}

void loop() {
  digitalWrite(led, HIGH); //led liga
  delay(1000); //fica 1 segundo ligado
  digitalWrite(led, LOW); //led desliga
  delay(1000); //1 segundo desligado
}
 básico

int led = 12; //cria a variável "led" e atribui o valor 12 a ela (porta 12)

void setup() {
  pinMode(led, OUTPUT); //define o led (porta 12) como saída
}

void loop() {
  digitalWrite(led, HIGH); //led liga
  delay(1000); //fica 1 segundo ligado
  digitalWrite(led, LOW); //led desliga
  delay(1000); //1 segundo desligado
}