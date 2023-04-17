// Fazer um contador, com um botão pra incremento e um botão para decremento de uma variável. O valor da variável deve ser mostrado em tela. Utilize funções.

#define botao 12
#define botao2 8


int x=0;

void setup(){
	pinMode(botao,INPUT_PULLUP);
  	pinMode(botao2,INPUT_PULLUP);
	Serial.begin(9600);
}

void incrementa(int tmp){
	
  	if (digitalRead(botao) == 0 ){
    	x++;
      	Serial.println(x);
		delay(tmp*1000);
      
  }
}

void decremento(int tmp){
	if (digitalRead(botao2)==0){
   	  	x--;
      	Serial.println(x);
	  	delay(tmp*1000);
    }
}

void loop(){
  
incrementa(1);
decremento(1); 
 
}
