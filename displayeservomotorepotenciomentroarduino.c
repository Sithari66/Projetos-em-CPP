#include <LiquidCrystal.h>
// lcd(RS, E, D4, D5, D6, D7)
#include<Servo.h>

Servo servo;

LiquidCrystal lcd(12,11,5,4,3,2);
int servomotor;

void setup(){
  
  servo.attach(7);
  Serial.begin(9600);
  lcd.begin(16,2); // Número de linhas e colunas
  lcd.clear(); // Limpa o Display
  lcd.setCursor(0,0); // Cursor bem à esquerda na segunda linha
  lcd.print("      Graus");
  
}

void loop(){

  servomotor = analogRead(A0);
  
  int potenciometro = map(servomotor, 0, 1023, 0, 180);
  
  servo.write(potenciometro);
  delay(30);
  
  
  lcd.setCursor(6,1); // Cursor bem à esquerda na primeira linha
  lcd.print(potenciometro);
  
  

  

}
