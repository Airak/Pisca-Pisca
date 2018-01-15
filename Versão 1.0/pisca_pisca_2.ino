int timer_1 = 200;
int t_low = 50;
int timer_2 = 600;
int pins[] = {0,1,2,3,4,5,6,7,8,9};
int num_pins=10;
long randNumber_1;
long randNumber_2;
long randNumber_3;
void setup()
{
  int i;
  for(i=0; i<num_pins; i++)
    pinMode(pins[i],OUTPUT);
}
void loop()
{
  int i;
  //Padrao 1
  for(i=0; i<num_pins; i++){
    digitalWrite(pins[i],HIGH);
    delay(timer_1);
    digitalWrite(pins[i],LOW);
  }
  //Padrao 3
  for(i=0; i<3; i++){
    digitalWrite(pins[i], HIGH);
    digitalWrite(pins[i+3], HIGH);
    digitalWrite(pins[i+6], HIGH);
    if(i==0) digitalWrite(pins[i+9], HIGH);
    delay(timer_2);
    digitalWrite(pins[i], LOW);
    digitalWrite(pins[i+3], LOW);
    digitalWrite(pins[i+6], LOW);
    if(i==0) digitalWrite(pins[i+9], LOW);
    delay(t_low);
  }
  //Padrao 2
  for(i=num_pins-1; i>=0; i--){
    digitalWrite(pins[i], HIGH);
    delay(timer_1);
    digitalWrite(pins[i], LOW);
  }
  //Padrao 3
  for(i=0; i<3; i++){
    digitalWrite(pins[i], HIGH);
    digitalWrite(pins[i+3], HIGH);
    digitalWrite(pins[i+6], HIGH);
    if(i==0) digitalWrite(pins[i+9], HIGH);
    delay(timer_2);
    digitalWrite(pins[i], LOW);
    digitalWrite(pins[i+3], LOW);
    digitalWrite(pins[i+6], LOW);
    if(i==0) digitalWrite(pins[i+9], LOW);
    delay(t_low);
  }
  //Padrao 4
  for(i=0; i<num_pins; i++){
    randNumber_1 = random(num_pins);
    randNumber_2 = random(num_pins);
    randNumber_3 = random(num_pins); 
    digitalWrite(pins[randNumber_1], HIGH);
    digitalWrite(pins[randNumber_2], HIGH);
    digitalWrite(pins[randNumber_3], HIGH);
    delay(timer_2);
    digitalWrite(pins[randNumber_1], LOW);
    digitalWrite(pins[randNumber_2], LOW);
    digitalWrite(pins[randNumber_3], LOW);
    delay(t_low);
  }
}
