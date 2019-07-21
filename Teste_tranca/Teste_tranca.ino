
void setup() 
{
     Serial.begin(9600); 
     pinMode(5,OUTPUT);
     digitalWrite(5,LOW);  
     Serial.print("Porta fechada");
}
void loop() 
{
  char comando;
  if (Serial.available()>0)
    {
        comando = Serial.read();
        if (comando == 'a') 
        {
           digitalWrite(5,HIGH);
           Serial.print("Porta aberta\n");
           delay(10000);
           digitalWrite(5,LOW);
           Serial.print("Porta fechada\n");
         }    
}
}
