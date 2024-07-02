// C++ code
//
int led1=3;
int led2=4;
int led3=5;
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(3000);
  digitalWrite(led1, LOW);
  digitalWrite(led2,HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(led2, LOW);
  digitalWrite(led3,HIGH);
  delay(3000);
  digitalWrite(led3,LOW);
  // Wait for 1000 millisecond(s)
}