#include <DFPlayerFour.h>
DFPlayerFour player(2,4,7,8);
String voice;
byte next=0;
void setup() {
  player.iniciar();
  pinMode(13,OUTPUT);
 Serial.begin(9600);
  digitalWrite(13,0);
}

void loop() {
    while (Serial.available()>0) {            //while Serial data is available over bluetooth
    delay(10);                        //delay added to make things stable
    char c = Serial.read();               //conduct a Serial reading of the Bluetooth data
    voice += c;                       //build the strings
  }
   if (voice.indexOf("reproducir música") > -1) {                     //starting from the most common question of introduction
   digitalWrite(13,1);
   next=1;
   player.start(52);
   delay(10000);
   player.start(49);
   delay(10000);
   player.start(28);
   delay(10000);
   player.start(52);
   delay(10000);
  }
   if (voice.indexOf("detener música") > -1) {                     //starting from the most common question of introduction
   digitalWrite(13,0);
   next=0;
   player.stop();
   
  }
  if (voice.indexOf("siguiente canción") > -1) {                     //starting from the most common question of introduction
   digitalWrite(13,0);
   next=next+1;
  
   player.start(next);
   
  }
   if (voice.indexOf("canción anterior") > -1) {                     //starting from the most common question of introduction
 
   next=next-1;
     if(next<=0){}
     else{ player.start(next);}
  
  
   
  }
   voice = "";
}
