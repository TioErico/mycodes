const int led1 = 11;
const int led2 = 10;
const int led3 = 6;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  int i = 0;
  int p = 0;
  int q = 0;
  
  while(i < 255) {
    analogWrite(led1, i);
    i++;
    delay(10);
  }
  
  while(p < 255) {
    analogWrite(led2, p);
    p++;
    delay(10);
  }
  
  while(q < 255) {
    analogWrite(led3, q);
    q++;
    delay(10);
  }
  
{
  delay(2000);
}

  while(i > 0) {
    analogWrite(led1, i);
    i--;
    delay(10);
  }

  while(p > 0) {
    analogWrite(led2, p);
    p--;
    delay(10);
  }

  while(q > 0) {
    analogWrite(led3, q);
    q--;
    delay(10);
  }
  
{
  delay(1000);
}

}
