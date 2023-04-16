int soundSensor = 2;
int LED = 3;

void setup() 
{

  pinMode (soundSensor, INPUT);
  pinMode (LED, OUTPUT);
}

void loop()
{
  int statusSensor = digitalRead (soundSensor);
  
  if (statusSensor == 1)
  {
    digitalWrite(LED, HIGH);
    delay(10000);
  }
  
  else
  {
    digitalWrite(LED, LOW);
  }
  
}
