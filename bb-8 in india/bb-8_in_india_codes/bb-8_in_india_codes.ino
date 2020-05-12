int motor11=10;
int motor12=9;
int en1=8;

int motor21=6;
int motor22=7;
int en2=5;

char bt=0;

void setup() 
{
 Serial.begin(9600);
 pinMode(motor11,OUTPUT);
 pinMode(motor12,OUTPUT);
 digitalWrite(en1,HIGH);

 pinMode(motor21,OUTPUT);
 pinMode(motor22,OUTPUT);
 digitalWrite(en2,HIGH);
}

void loop() 
{
  bt=Serial.read();
    if(bt=='F')
      {
          digitalWrite(motor11,HIGH);
          digitalWrite(motor12,LOW);
          digitalWrite(motor21,HIGH);
          digitalWrite(motor22,LOW);
      }
    if(bt=='B')
      {
          digitalWrite(motor11,LOW);
          digitalWrite(motor12,HIGH);
          digitalWrite(motor21,LOW);
          digitalWrite(motor22,HIGH);
      }
    if(bt=='L')
      {
          digitalWrite(motor11,HIGH);
          digitalWrite(motor12,LOW);
          digitalWrite(motor21,LOW);
          digitalWrite(motor22,HIGH);
      }
    if(bt=='R')
      {
          digitalWrite(motor11,LOW);
          digitalWrite(motor12,HIGH);
          digitalWrite(motor21,HIGH);
          digitalWrite(motor22,LOW);
      }
    if(bt=='S')
      {
          digitalWrite(motor11,LOW);
          digitalWrite(motor12,LOW);
          digitalWrite(motor21,LOW);
          digitalWrite(motor22,LOW);
      }

}
