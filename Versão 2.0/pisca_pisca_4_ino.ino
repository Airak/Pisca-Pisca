#include "pitches.h" 
#define NO_SOUND 0 

int melodia[] = {   

NOTE_C4, NOTE_F4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_G4,NOTE_A4,NOTE_AS4, NOTE_B4,NOTE_C5,NOTE_F4,NOTE_C4, NOTE_F4,NOTE_E4,NOTE_G4,NOTE_F4,NOTE_A4,NOTE_G4,NOTE_AS4,NOTE_A4, NOTE_FS4,NOTE_G4,NO_SOUND,NO_SOUND,NOTE_C4, NOTE_G4,NOTE_FS4,NOTE_G4,NOTE_A4,NOTE_AS4,NOTE_A4,NOTE_AS4,NOTE_B4, 
NOTE_CS5,NOTE_D5,NOTE_G4,NOTE_C4, NOTE_G4,NOTE_F4,NOTE_A4,NOTE_G4,NOTE_AS4,NOTE_A4,NOTE_B4,NOTE_AS4, NOTE_GS4,NOTE_A4,NO_SOUND,NOTE_A4,NOTE_A4, NOTE_AS4,NOTE_A4,NO_SOUND,NOTE_A4,NOTE_AS4,NOTE_A4, NOTE_A4,NOTE_D5,NOTE_C5,NOTE_AS4, NOTE_AS4,NOTE_A4,NOTE_A4,NOTE_G4,NOTE_G4,NOTE_F4,NOTE_F4,NOTE_E4,   
NOTE_E4,NOTE_D4,NO_SOUND,NOTE_G4,NOTE_G4, NOTE_A4,NOTE_G4,NO_SOUND,NOTE_G4,NOTE_A4,NOTE_G4, NOTE_G4,NOTE_C5,NOTE_B4,NOTE_A4, NOTE_A4,NOTE_G4,NOTE_G4,NOTE_F4,NOTE_F4,NOTE_E4,NOTE_E4,NOTE_D4, NOTE_D4,NOTE_C4,NO_SOUND,NOTE_C4,NOTE_E4,NOTE_G4, NOTE_AS4,NOTE_C4,NOTE_E4,NOTE_G4,NOTE_AS4,NOTE_C4,NOTE_E4,NOTE_G4,   
NOTE_AS4,NOTE_AS4,NOTE_C4, NOTE_F4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_G4,NOTE_A4,NOTE_AS4, NOTE_B4,NOTE_C5,NOTE_F4,NOTE_C4, NOTE_F4,NOTE_E4,NOTE_G4,NOTE_F4,NOTE_A4,NOTE_G4,NOTE_AS4,NOTE_A4, NOTE_FS4,NOTE_G4,NO_SOUND,NOTE_C4, NOTE_G4,NOTE_FS4,NOTE_G4,NOTE_A4,NOTE_AS4,NOTE_A4,NOTE_AS4,NOTE_B4,   
NOTE_CS5,NOTE_D5,NOTE_G4,NOTE_C4, NOTE_G4,NOTE_FS4,NOTE_A4,NOTE_G4,NOTE_AS4,NOTE_A4,NOTE_C5,NOTE_AS4, NOTE_GS4,NOTE_A4,NO_SOUND,NO_SOUND,NOTE_F4, NOTE_G4,NOTE_F4,NOTE_E4,NOTE_F4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_F4, NOTE_F4,NOTE_AS4,NOTE_AS4,NO_SOUND,NOTE_G4, NOTE_A4,NOTE_G4,NOTE_FS4,NOTE_G4,NOTE_FS4,NOTE_G4,NOTE_A4,NOTE_G4,     
NOTE_G4,NOTE_C5,NOTE_C5,NO_SOUND,NOTE_A4, NOTE_AS4,NOTE_A4,NOTE_GS4,NOTE_A4,NOTE_GS4,NOTE_A4,NOTE_AS4,NOTE_A4, NOTE_A4,NOTE_D5,NOTE_C5,NOTE_AS4,NOTE_G4, NOTE_G4,NOTE_F4,NO_SOUND,NOTE_E4,NOTE_F4,NOTE_G4, NOTE_AS4,NOTE_A4,NOTE_E4,NOTE_F4,NOTE_CS4,NOTE_D4,NOTE_AS4,NOTE_G4, NOTE_G4,NOTE_F4,NO_SOUND,NOTE_G4,NOTE_A4,NOTE_AS4,    

NOTE_B4,NOTE_C5,NOTE_A4,NOTE_F4,NOTE_D4,NOTE_AS4, NOTE_A4,NOTE_F4,NOTE_D4,NOTE_C4,NOTE_D4,NOTE_E4,   
NOTE_F4             

}; 

// Duração das Notas: Colcheia:8; Semínima: 4; Mínima:2; Semibreve:1 

int tempoNotas[] = {   
4,   
6,16,6,16,6,16,6,16,   
3,8,4,4,   
6,16,6,16,6,16,6,16,   
4,4,4,16,8,   
6,16,6,16,6,16,6,16,   

3,8,4,4,   
6,16,6,16,6,16,6,16,   
4,4,4,6,16,   
4,4,8,8,6,16,   
4,2,8,8,   
8,8,8,8,8,8,8,8,   

4,4,4,6,16,   
4,4,8,8,6,16,   
4,2,8,8,   
8,8,8,8,8,8,8,8,   
4,4,8,8,8,8,   
8,8,8,8,8,8,8,8,   

2,4,4,   
6,16,6,16,6,16,6,16,   
3,8,4,4,   
6,16,6,16,6,16,6,16,   
4,4,4,4,   
6,16,6,16,6,16,6,16,   

3,8,4,4,   
6,16,6,16,6,16,6,16,   
4,4,4,8,16,   
6,16,6,16,6,16,6,16,   
3,8,4,8,8,   
6,16,6,16,6,16,6,16,      

3,8,4,8,8,   
6,16,6,16,6,16,6,16,   
4,3,8,8,8,   
4,4,8,8,8,8,   
8,8,8,8,8,8,8,8,   
4,4,8,8,8,8,      

8,8,8,8,4,4,   
4,6,16,4,6,16,   
2 

}; 

const int compasso = 1500; // Altera o compasso da música 

int timer_1 = 200;
int t_low = 50;
int timer_2 = 600;
int pins[] = {0,1,2,3,4,5,6,7,8};
int ldrPin = 0; //LDR no pino analogico 0
int ldrValor = 0;
int i = 0;

int num_pins=9;
int num_padroes=5;
long randNumber_1;
long randNumber_2;
long randNumber_3;

void Padroes();
void Low();
void Padrao1();
void Padrao2();
void Padrao3();
void Padrao4();
void Padrao5();

void setup(){
  for(i=0; i<num_pins; i++)
    pinMode(pins[i],OUTPUT);
  /*
  for (int Nota = 0; Nota < 230; Nota++) {//o número 80 indica quantas notas tem a nossa matriz.     
    int tempo = compasso/tempoNotas[Nota]; //Tempo = compasso dividido pela indicação da matriz tempoNotas.     
    tone(9, melodia[Nota],tempo); //Toca a nota indicada pela matriz melodia durante o tempo.     
    // Para distinguir as notas adicionamos um tempo entre elas (tempo da nota + 20%).    
    delay(tempo*1.2); 
  }  */
}

void loop(){
  
  ldrValor = analogRead(ldrPin);// O valor lido ser entre 0 e 1023
  
  if (ldrValor>=800){
    Padroes(random(num_padroes));
  }
  else{
    Low();
  }
  
}

void Padroes(int k){
  switch(k){
   case 0: 
     Padrao1();
     break;
   case 1: 
     Padrao2();
     break;
   case 2: 
     Padrao3();
     break;
   case 3: 
     Padrao4();
     break;
   case 4: 
     Padrao5();
     break;
  }
}

void Low(){
  for(i=0; i<num_pins; i++){
    digitalWrite(pins[i],LOW);
  }
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
