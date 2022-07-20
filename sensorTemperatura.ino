#include <LiquidCrystal.h>
#include <Wire.h>
#define coluna 16
#define linha 2
#define ledVermelho 3
#define ledAmarelo 2
#define ledVerde 1
#define ledAzul 0
#define endereco 0x27
const int LM35 = A0;
float temperaturaC, temperaturaF;
LiquidCrystal lcd(2,3,4,6,7,8,9,10,11,12,13);

void setup()
{
  Serial.begin(9600);
  //pinMode(ledVermelho, OUTPUT);
  //pinMode(ledAmarelo, OUTPUT);
  //pinMode(ledVerde, OUTPUT);
  //pinMode(ledAzul, OUTPUT);
  lcd.begin(16,2, LCD_5x10DOTS);
  lcd.clear();
  lcd.write('A');
  lcd.setCursor(0,1);
  lcd.print("Em F: ");
}

void loop()
{
  temperaturaF = (analogRead(LM35))*5/(1023.0)/0.01;
  temperaturaC = ((temperaturaF-32)*5)/9;
  Serial.print(temperaturaC);
  lcd.setCursor(6,0);
  lcd.print(temperaturaC);
  lcd.setCursor(6,1);
  lcd.print(temperaturaF);
  /*if(temperaturaC<20){
    digitalWrite(ledAzul, HIGH);
    digitalWrite(ledAzul, LOW);
  } else if(temperaturaC>=20 && temperaturaC<40){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde, LOW);
  } else if(temperaturaC>=40 && temperaturaC<60){
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo, LOW);
  } else if(temperaturaC>=60){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVermelho, LOW);
  }*/
}
