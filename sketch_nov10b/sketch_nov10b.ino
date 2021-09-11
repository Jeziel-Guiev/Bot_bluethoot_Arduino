#include <DFPlayerFour.h>
#include <string.h>
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
   if (voice.indexOf("abrir la puerta") > -1||voice.indexOf("abre la puerta") > -1){player.start(1);}
   if (voice.indexOf("apagar luz") > -1||voice.indexOf("apagar luces") > -1){player.start(2);}
   if (voice.indexOf("quién entro") > -1||voice.indexOf("quién es") > -1){player.start(3);}
   if (voice.indexOf("apagando música") > -1||voice.indexOf("dejar de reproducir") > -1){player.start(4);}
   if (voice.indexOf("buenas noches") > -1||voice.indexOf("dulces noches") > -1){player.start(5);}
   if (voice.indexOf("buenas tardes") > -1||voice.indexOf("buenas tardes jessie") > -1){player.start(6);}
   if (voice.indexOf("cerrar puerta") > -1||voice.indexOf("cierra la puerta") > -1){player.start(7);}
   if (voice.indexOf("confirmar comando") > -1||voice.indexOf("confirmar") > -1){player.start(8);}
   if (voice.indexOf("comprendiste") > -1){player.start(9);}
   if (voice.indexOf("mucho gusto") > -1){player.start(10);}
   if (voice.indexOf("quién es el ex presidente de bolivia") > -1){player.start(11);}
   if (voice.indexOf("encender luz") > -1){player.start(12);}
   if (voice.indexOf("te gusta estar triste") > -1){player.start(28);}
   if (voice.indexOf("gracias") > -1){player.start(14);}
   if (voice.indexOf("dónde estás") > -1){player.start(15);}
   if (voice.indexOf("tú no tienes sueño") > -1){player.start(16);}
   if (voice.indexOf("me estás escuchando") > -1){player.start(17);}
   if (voice.indexOf("porque tardas en responder") > -1){player.start(18);}
   if (voice.indexOf("hay alguien") > -1){player.start(19);}
   if (voice.indexOf("hola robot") > -1){player.start(20);}
   if (voice.indexOf("hola jezzie") > -1){player.start(21);}
   if (voice.indexOf("hola alegria") > -1){player.start(22);}
   if (voice.indexOf("estoy trabajando") > -1){player.start(23);}
   if (voice.indexOf("cuál es tu nombre") > -1){player.start(24);}
   if (voice.indexOf("tonto") > -1){player.start(25);}
   if (voice.indexOf("aburrida") > -1){player.start(26);}
   if (voice.indexOf("quién eres") > -1){player.start(27);}
   if (voice.indexOf("te gusta comer") > -1){player.start(28);}
   if (voice.indexOf("me siento solo") > -1){player.start(29);}
   if (voice.indexOf("estoy triste") > -1){player.start(30);}
   if (voice.indexOf("de acuerdo") > -1){player.start(31);}
   if (voice.indexOf("tú no eres nada") > -1){player.start(32);}
   if (voice.indexOf("reproducir música") > -1){player.start(33);}
   if (voice.indexOf("puedes comer") > -1){player.start(34);}
  voice = "";}
