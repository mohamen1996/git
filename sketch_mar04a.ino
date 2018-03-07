
const int led =12;

void setup() 
{
 pinMode(led,OUTPUT);
}
void loop()
 {
digitalWrite(led,HIGH);
delay(10000);
digitalWrite(led,LOW);
delay(50000);
}
