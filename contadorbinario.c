// Crie um projeto com dois LED´s e usando funções. Faça um contador binário, sendo que o intervalo entre cada estado deve ser 1 segundo. Ou seja, inicialmente, os dois leds devem estar apagados, após 1 segundo um LED deve ser aceso, em seguida este é apagado e o outro aceso, e por último os dois LED´s devem ser acesos.


#define led1 13
#define led2 12

int cont=0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void contador(int tmp){
  
  // Incrementa o contador
    cont = (cont == 7) ? 0 : cont+1;

    Serial.print("Contador em:");
    Serial.println(cont);

    digitalWrite(led1, cont % 2);
    digitalWrite(led2, (cont >> 1) % 2);
    delay (tmp*1000);
}



void loop() {
    
contador(1);
  
}
