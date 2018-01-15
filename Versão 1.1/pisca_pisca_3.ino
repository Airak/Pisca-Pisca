int timer_1 = 200;
int timer_2 = 600;
int t_low = 50;
int pins[] = {0,1,2,3,4,5,6,7,8,9};
int num_pins=10;
long randNumber_1;
long randNumber_2;
long randNumber_3;
int i;

void Padrao1();
void Padrao2();
void Padrao3();
void Padrao4();
void Padrao5();

void setup(){
  for(i=0; i<num_pins; i++)
    pinMode(pins[i],OUTPUT);
}

void loop(){
  Padrao1();
  Padrao3();
  Padrao2();
  Padrao4();
  Padrao1();
  Padrao3();
  Padrao2();
  Padrao5();
}

void Padrao1(){
  //Esquerda pra direita
  for(i=0; i<num_pins; i++){
    digitalWrite(pins[i],HIGH);
    delay(timer_1);
    digitalWrite(pins[i],LOW);
  }
}

void Padrao2(){
  //Direita pra esquerda
  for(i=num_pins-1; i>=0; i--){
    digitalWrite(pins[i], HIGH);
    delay(timer_1);
    digitalWrite(pins[i], LOW);
  }
}

void Padrao3(){
  //Acende os leds de mesma cor.
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
}

void Padrao4(){
  //Acende 3 leds randomicamente de cada vez.
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

void Padrao5(){
  //Acende 3 leds seguidos de cada vez.
  for(i=0; i<num_pins; i+=3){ 
    digitalWrite(pins[i], HIGH);
    digitalWrite(pins[i+1], HIGH);
    digitalWrite(pins[i+2], HIGH);
    delay(timer_2);
    digitalWrite(pins[i], LOW);
    digitalWrite(pins[i+1], LOW);
    digitalWrite(pins[i+2], LOW);
    delay(t_low);
  }
}


