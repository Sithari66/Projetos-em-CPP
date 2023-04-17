//Faça um alarme para detectar a porta aberta da geladeira. Funda os circuitos do fotorresistor e do buzzer, e crie um programa que, ao detectar luz, emita um alarme sonoro. Esse pequeno e simples equipamento pode ser deixado dentro da geladeira e, caso a porta fique aberta, permitindo que alguma luz entre, ele emitirá o alarme.

int valor = 0;

void setup(){
  
  Serial.begin(9600);
}

void loop(){
  
  valor = analogRead(A0);
  Serial.println(valor);
  
  //Valor definido pela metade captada pelo Buzzer que e 679
  // Observação o valor foi arredondado para 678
  if(valor >= 339){
  	tone(2,2000);
    delay(500);
    noTone(2);
    delay(300);
  }
}
