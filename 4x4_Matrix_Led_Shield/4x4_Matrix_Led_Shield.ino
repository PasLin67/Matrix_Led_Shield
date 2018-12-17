#define Vaaka1 6  // led1,led2,led3,led4
#define Vaaka2 7  // led5,led6,led7,led8
#define Vaaka3 8  // led9,led10,led11,led12
#define Vaaka4 9  // led13,led14,led15,led16
#define Pysty1 2  // led1,led5,led9,led13
#define Pysty2 3  // led2,led6,led10,led14
#define Pysty3 4  // led3,led7,led11,led15
#define Pysty4 5  // led4,led8,led12,led1
#define WAIT 500
#define viive 300


const int S1 = 11; // Arduinoon liitetty pinni
const int S2 = 12; // Arduinoon liitetty pinni
const int NAPPIPOHJASSA = LOW;

void setup() {
  
 pinMode(Vaaka1, OUTPUT);
 pinMode(Vaaka1, OUTPUT);
 pinMode(Vaaka3, OUTPUT);
 pinMode(Vaaka4, OUTPUT);
 pinMode(Pysty1, OUTPUT);
 pinMode(Pysty2, OUTPUT);
 pinMode(Pysty3, OUTPUT);
 pinMode(Pysty4, OUTPUT);
 pinMode(S1, INPUT_PULLUP);
 pinMode(S2, INPUT_PULLUP);

}
void ledOff(){   // Sammuttaa kaikki ledit
  digitalWrite(Vaaka1, LOW);
  digitalWrite(Vaaka2, LOW);
  digitalWrite(Vaaka3, LOW);
  digitalWrite(Vaaka4, LOW);
  digitalWrite(Pysty1, HIGH);
  digitalWrite(Pysty2, HIGH);
  digitalWrite(Pysty3, HIGH);
  digitalWrite(Pysty4, HIGH);
}

void ledOn(){   // Sytyttää kaikki ledit
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty1, LOW);
  digitalWrite(Pysty2, LOW);
  digitalWrite(Pysty3, LOW);
  digitalWrite(Pysty4, LOW);
}


void spiraali(){
   ledOff(); 
   Led1();
   delay(viive);
   ledOff();
   Led2();
   delay(viive);
   ledOff();
   Led3();
   delay(viive);
   ledOff();
   Led4();
   delay(viive);
   ledOff();
   Led8();
   delay(viive);
   ledOff();
   Led12();
   delay(viive);
   ledOff();
   Led16();
   delay(viive);
   ledOff();
   Led15();
   delay(viive);
   ledOff();
   Led14();
   delay(viive);
   ledOff();
   Led13();
   delay(viive);
   ledOff();
   Led9();
   delay(viive);
   ledOff();
   Led5();
   delay(viive);
   ledOff();
   Led6();
   delay(viive);
   ledOff();
   Led7();
   delay(viive);
   ledOff();
   Led11();
   delay(viive);
   ledOff();
   Led10();
   delay(viive);
   ledOn();
   delay(WAIT);
   ledOff();
    Led10();
   delay(WAIT);
   ledOff();
   Led11();
   delay(WAIT);
   ledOff();
   Led7();
   delay(WAIT);
   ledOff();
   Led6();
   delay(WAIT);
   ledOff();
   Led5();
   delay(WAIT);
   ledOff();
   Led9();
   delay(WAIT);
   ledOff();
   Led13();
   delay(WAIT);
   ledOff();
   Led14();
   delay(WAIT);
   ledOff();
   Led15();
   delay(WAIT);
   ledOff();
   Led16();
   delay(WAIT);
   ledOff();
   Led12();
   delay(WAIT);
   ledOff();
   Led8();
   delay(WAIT);
   ledOff();
   Led4();
   delay(WAIT);
   ledOff();
   Led3();
   delay(WAIT);
   ledOff();
   Led2();
   delay(WAIT);
   ledOff();
   Led1();
   delay(WAIT);
   ledOn();
   delay(WAIT);
   ledOff();
   Led1();
   delay(200);
   ledOff();
   Led16();
   delay(200);
   ledOff();
   Led4();
   delay(200);
   ledOff();
   Led13();
   delay(200);
   ledOff();
}

void kulmat(){
  Led1();
  delay(200);
  ledOff();
  Led16();
  delay(200);
  ledOff();
  Led4();
  delay(200);
  ledOff();
  Led13();
  delay(200);
  ledOff();
 }
 void rivit(){
  ledOff();
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Pysty1, LOW);
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Pysty2, LOW);
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Pysty3, LOW);
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Pysty4, LOW);
  delay(WAIT); 
  ledOff();
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Pysty1, LOW);
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Pysty2, LOW);
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Pysty3, LOW);
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Pysty4, LOW);
  delay(WAIT);
  ledOff();
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Pysty1, LOW);
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Pysty2, LOW);
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Pysty3, LOW);
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Pysty4, LOW);
  delay(WAIT);
  ledOff();
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty1, LOW);
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty2, LOW);
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty3, LOW);
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty4, LOW);
  delay(WAIT);
 }

void Led1(){
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Pysty1, LOW);
 }
void Led2(){
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Pysty2, LOW);
 }
void Led3(){
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Pysty3, LOW);
 }
void Led4(){
  digitalWrite(Vaaka1, HIGH);
  digitalWrite(Pysty4, LOW);
 }
void Led5(){
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Pysty1, LOW);
 }
void Led6(){
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Pysty2, LOW);
  }
void Led7(){
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Pysty3, LOW);
  
 }
void Led8(){
  digitalWrite(Vaaka2, HIGH);
  digitalWrite(Pysty4, LOW);
  
 }
void Led9(){
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Pysty1, LOW);
  
 }
void Led10(){
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Pysty2, LOW);
  
 }
void Led11(){
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Pysty3, LOW);
  
 }
void Led12(){
  digitalWrite(Vaaka3, HIGH);
  digitalWrite(Pysty4, LOW);
  
 }
void Led13(){
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty1, LOW);
  
 }
void Led14(){
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty2, LOW);
 
 }
void Led15(){
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty3, LOW);
  
 }
void Led16(){
  digitalWrite(Vaaka4, HIGH);
  digitalWrite(Pysty4, LOW);
  
 }

   
void loop(){

 int tilaS1 = digitalRead(S1);
 int tilaS2 = digitalRead(S2);

 if (tilaS1 == NAPPIPOHJASSA){
 spiraali();
 }else{
  ledOff();
}

 if (tilaS2 == NAPPIPOHJASSA) {
  rivit();
 }else{
  ledOff();
 }

}
