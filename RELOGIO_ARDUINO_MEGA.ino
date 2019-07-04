#include <Wire.h> // Biblioteca Wire
#include "RTClib.h" //Biblioteca RTC DS3231

RTC_DS3231 rtc; // Define o tipo de RTC

//---------- Digito 1 (hora) ----------
#define D1A0 27 //- Pino do Byte 1
#define D1A1 26 //- Pino do Byte 2
#define D1A2 25 //- Pino do Byte 3
#define D1A3 24 //- Pino do Byte 4
//---------- Digito 2 (hora) ----------
#define D2A0 22 //- Pino do Byte 1
#define D2A1 22 //- Pino do Byte 2
#define D2A2 21 //- Pino do Byte 3
#define D2A3 20 //- Pino do Byte 4
//---------- Digito 3 (minuto) --------
#define D3A0 4 //- Pino do Byte 1
#define D3A1 5 //- Pino do Byte 2
#define D3A2 6 //- Pino do Byte 3
#define D3A3 7 //- Pino do Byte 4
//---------- Digito 4 (minuto) --------
#define D4A0 8 //- Pino do Byte 1
#define D4A1 9 //- Pino do Byte 2
#define D4A2 10 //- Pino do Byte 3
#define D4A3 11 //- Pino do Byte 4
//-------------------------------------

void setup() {
  rtc.begin(); //Inicia o relogio
  Serial.begin(9600); //Inicia o Serial Monitor
  pinMode(D1A0, OUTPUT); //Digito 1 (hora)
  pinMode(D1A1, OUTPUT); //Digito 1 (hora)
  pinMode(D1A2, OUTPUT); //Digito 1 (hora) 
  pinMode(D1A3, OUTPUT); //Digito 1 (hora)
  pinMode(D2A0, OUTPUT); //Digito 2 (hora)
  pinMode(D2A1, OUTPUT); //Digito 2 (hora)
  pinMode(D2A2, OUTPUT); //Digito 2 (hora)
  pinMode(D2A3, OUTPUT); //Digito 2 (hora)
  pinMode(D3A0, OUTPUT); //Digito 3 (minuto)
  pinMode(D3A1, OUTPUT); //Digito 3 (minuto)
  pinMode(D3A2, OUTPUT); //Digito 3 (minuto)
  pinMode(D3A3, OUTPUT); //Digito 3 (minuto)
  pinMode(D4A0, OUTPUT); //Digito 4 (minuto)
  pinMode(D4A1, OUTPUT); //Digito 4 (minuto)
  pinMode(D4A2, OUTPUT); //Digito 4 (minuto)
  pinMode(D1A3, OUTPUT); //Digito 4 (minuto)
}

void loop() {
  DateTime now = rtc.now(); //Obtem os dados do RTC
  int z = (now.hour()); // Seta a Variavel Z com a Hora
  int y = (now.minute()); //Seta a Variavel Y com o Minuto

  digit2(z); //Chama os 2 numeros da Hora
  digit1(y); //Chama os 2 numeros do Minuto
}

//-------------------- FUNÇÃO DAS HORAS --------------------

void HORA00() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA01() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA02() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA03() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA04() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, HIGH);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA05() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, HIGH);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA06() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, HIGH);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA07() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, HIGH);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA08() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, HIGH);
}

void HORA09() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, HIGH);
}

void HORA10() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA11() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA12() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA13() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA14() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, HIGH);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA15() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, HIGH);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA16() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, HIGH);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA17() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, HIGH);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA18() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, HIGH);
}

void HORA19() {
  digitalWrite(D1A0, HIGH);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, LOW);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, HIGH);
}

void HORA20() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, HIGH);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA21() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, HIGH);  digitalWrite(D2A1, LOW);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA22() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, LOW);
  digitalWrite(D1A1, HIGH);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

void HORA23() {
  digitalWrite(D1A0, LOW);  digitalWrite(D2A0, HIGH);
  digitalWrite(D1A1, HIGH);  digitalWrite(D2A1, HIGH);
  digitalWrite(D1A2, LOW);  digitalWrite(D2A2, LOW);
  digitalWrite(D1A3, LOW);  digitalWrite(D2A3, LOW);
}

//---------- ---------- ---------- ---------- ---------- -----
// -------------------- SELECIONA QUAL FUNÇÃO SERA CHAMADA EM FUNÇÃO DO NUMERO DO RELOGIO (HORAS) --------------------
void digit2(int num){
  switch (num){
    case 0: HORA00();  break;    case 1: HORA01();  break;    case 2: HORA02();  break;    case 3: HORA03();  break;    case 4: HORA04();  break;
    case 5: HORA05();  break;    case 6: HORA06();  break;    case 7: HORA07();  break;    case 8: HORA08();  break;    case 9: HORA09();  break;
    case 10: HORA10(); break;    case 11: HORA11(); break;    case 12: HORA12(); break;    case 13: HORA13(); break;    case 14: HORA14(); break;
    case 15: HORA15(); break;    case 16: HORA16(); break;    case 17: HORA17(); break;    case 18: HORA18(); break;    case 19: HORA19(); break;
    case 20: HORA20(); break;    case 21: HORA21(); break;    case 22: HORA22(); break;    case 23: HORA23(); break;
  }
}
//--------------------------------------------------------------------------------------------------------------------
//-------------------- FUNÇÃO DOS MINUTOS --------------------

void MIN00() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN01() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN02() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN03() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN04() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN05() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN06() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN07() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN08() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN09() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN10() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN11() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN12() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN13() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN14() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN15() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN16() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN17() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN18() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN19() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN20() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN21() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN22() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN23() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN24() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN25() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN26() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN27() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN28() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN29() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN30() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN31() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN32() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN33() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN34() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN35() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN36() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN37() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN38() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN39() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, HIGH);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, LOW);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN40() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN41() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN42() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN43() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN44() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN45() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN46() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN47() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN48() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN49() {
  digitalWrite(D3A0, LOW);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN50() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN51() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN52() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN53() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN54() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN55() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN56() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN57() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, HIGH);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, HIGH);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, LOW);
}

void MIN58() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, LOW);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}

void MIN59() {
  digitalWrite(D3A0, HIGH);  digitalWrite(D4A0, HIGH);
  digitalWrite(D3A1, LOW);  digitalWrite(D4A1, LOW);
  digitalWrite(D3A2, HIGH);  digitalWrite(D4A2, LOW);
  digitalWrite(D3A3, LOW);  digitalWrite(D4A3, HIGH);
}
//-------------------- -------------------- --------------------
// -------------------- SELECIONA QUAL FUNÇÃO SERA CHAMADA EM FUNÇÃO DO NUMERO DO RELOGIO (MINUTOS) --------------------
void digit1(int num){
  switch (num){
    case 0: MIN00();  break;     case 1: MIN01();  break;    case 2: MIN02();  break;    case 3: MIN03();  break;    case 4: MIN04();   break;
    case 5: MIN05();  break;     case 6: MIN06();  break;    case 7: MIN07();  break;    case 8: MIN08();  break;    case 9: MIN09();   break;
    case 10: MIN10(); break;     case 11: MIN11(); break;    case 12: MIN12(); break;    case 13: MIN13(); break;    case 14: MIN14();  break;
    case 15: MIN15(); break;     case 16: MIN16(); break;    case 17: MIN17(); break;    case 18: MIN18(); break;    case 19: MIN19();  break;
    case 20: MIN20(); break;     case 21: MIN21(); break;    case 22: MIN22(); break;    case 23: MIN23(); break;    case 24: MIN24();  break;
    case 25: MIN25(); break;     case 26: MIN26(); break;    case 27: MIN27(); break;    case 28: MIN28(); break;    case 29: MIN29();  break;
    case 30: MIN30(); break;     case 31: MIN31(); break;    case 32: MIN32(); break;    case 33: MIN33(); break;    case 34: MIN34();  break;
    case 35: MIN35(); break;     case 36: MIN36(); break;    case 37: MIN37(); break;    case 38: MIN38(); break;    case 39: MIN39();  break;
    case 40: MIN40(); break;     case 41: MIN41(); break;    case 42: MIN42(); break;    case 43: MIN43(); break;    case 44: MIN44();  break;
    case 45: MIN45(); break;     case 46: MIN46(); break;    case 47: MIN47(); break;    case 48: MIN48(); break;    case 49: MIN49();  break;
    case 50: MIN50(); break;     case 51: MIN51(); break;    case 52: MIN52(); break;    case 53: MIN53(); break;    case 54: MIN54();  break;
    case 55: MIN55(); break;     case 56: MIN56(); break;    case 57: MIN57(); break;    case 58: MIN58(); break;    case 59: MIN59();  break;
  }
}
//------------------------------------------------------------------------------------------------------------------------
