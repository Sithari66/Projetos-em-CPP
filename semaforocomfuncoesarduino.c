//Implemente um semáforo usando funções.

#define led_vermelho 8
#define led_amarelo 12 
#define led_verde 13


void setup() { 

pinMode(led_vermelho,OUTPUT);
pinMode(led_amarelo,OUTPUT);
pinMode(led_verde,OUTPUT);

} 

void vermelho(int tmp){
	digitalWrite(led_vermelho, HIGH);
  	digitalWrite(led_amarelo, LOW);
  	digitalWrite(led_verde, LOW);
  	delay(tmp*1000);
  
}

void amarelo(int tmp){
	digitalWrite(led_vermelho, LOW);
  	digitalWrite(led_amarelo, HIGH);
  	digitalWrite(led_verde, LOW);
  	delay(tmp*1000);

}

void verde(int tmp){
	digitalWrite(led_vermelho, LOW);
  	digitalWrite(led_amarelo, LOW);
  	digitalWrite(led_verde, HIGH);
  	delay(tmp*1000);

}


void loop()
{
 verde(8); 
 amarelo(4);
 vermelho(8);
 
}
