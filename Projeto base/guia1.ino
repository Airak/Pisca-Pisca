int timer = 200;
int pins[] = {0,1,2,3,4,5,6,7,8,9};
int num_pins=10;
void setup()
{
  int i;
  for(i=0; i<num_pins; i++)
    pinMode(pins[i],OUTPUT);
}
void loop()
{
  int i;
  for(i=0; i<num_pins; i++){
    digitalWrite(pins[i],HIGH);
    delay(timer);
    digitalWrite(pins[i],LOW);
  }
  for(i=num_pins-1; i>=0; i--){
    digitalWrite(pins[i], HIGH);
    delay(timer);
    digitalWrite(pins[i], LOW);
  }
}
