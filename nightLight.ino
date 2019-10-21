int d,j;
void setup()
{
  pinMode(8,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
 pinMode(A4,INPUT);
 Serial.begin(9600);
}

void loop()
{
  d=digitalRead(8);
  if(d==0)
  {
 int value=analogRead(A4);
  Serial.println(value);
  delay(5);
  if(value<=350)
  {
    for(j=4;j<=7;j++)
   {
     digitalWrite(j,HIGH);
   }
  }
   else
  {
   digitalWrite(7,HIGH);   
   for(j=4;j<=6;j++)
    {
      digitalWrite(j,LOW);
   }
  }
  }else{
  		for(j= 4;j<=7;j++)
        { digitalWrite(j,LOW);
        }
  }
}