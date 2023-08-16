// This is a first practical regarding arduino programming.
// Hardware is developed by 
int led1 = 7;
int led2 = 6;
int led3 = 5;
int led4 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);

  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);
  delay(100);

  // put your main code here, to run repeatedly:
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);
  delay(100);

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);

  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);

  digitalWrite(led1, HIGH);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led4, LOW);
  delay(100);

  
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(100);

  digitalWrite(led1, HIGH);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led4, LOW);
  delay(100);

  
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(100);

  




}
