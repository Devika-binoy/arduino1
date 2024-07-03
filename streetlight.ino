// C++ code
//
int led=7;
int ldr=2;
int ldrState=1;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
  }

void loop()
{
  ldrState=digitalRead(ldr);
  if(ldrState==LOW){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}