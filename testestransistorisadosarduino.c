//Altere o exercício anterior(Transistor NPN), colocando a base em uma porta de saída do Arduino e colocar o botão em uma porta de entrada com PULLUP. Controlar a saída na base do transistor de acordo com o clique do botão. Com o botão pressionado o LED deve acender, com o botão não pressionado deve se manter apagado.

void setup()
{
  pinMode(7, INPUT_PULLUP);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if(digitalRead(7) == LOW){
  	digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    while(!digitalRead(7));
  }else{
  	digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
  }
}

//Substitua a fonte de energia do coletor, colocando o conjunto de pilhas no lugar da porta de 5V. Substitua o circuito do LED e posicione o motor DC.

void setup()
{
  pinMode(4, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}

void loop()
{
  if(digitalRead(4) == LOW){
  	digitalWrite(3,HIGH);
    while(!digitalRead(4));
  }else{
  	digitalWrite(3,LOW);
    //digitalWrite(3,LOW);
  }
}

//Criar um programa que controle o Motor na ponte H de transistores. Enviar os sinais corretos para controlar o motor parado, no sentido horário e anti-horário. MUITO CUIDADO PARA NÃO CRIAR CURTO.

// C++ code
//

int antih =13;
int h =7;


void setup()
{
  pinMode(antih, OUTPUT);
  pinMode(h, OUTPUT);
}

void loop()
{
  digitalWrite(antih, LOW);
  digitalWrite(h, HIGH);
  delay(500); 
  digitalWrite(antih, HIGH);
  digitalWrite(h, LOW);
  delay(500); 
}

// Criar um programa que controle através de relé uma lâmpada. Fazer o programa para controlar através de um botão, e outro para controlar com comando Serial.
//BOTÃO

int pinRele = 4;
int btn = 2;
int leitura = 0;

void setup()
{
  pinMode(pinRele, OUTPUT);
  digitalWrite(pinRele, LOW);
  pinMode(btn, INPUT_PULLUP);
}

void loop()
{
  leitura = digitalRead(btn);
  if(leitura == HIGH){
    digitalWrite(pinRele, LOW);
    
  }
  if(leitura == LOW){
    digitalWrite(pinRele, HIGH);
  }
}

//SERIAL

int pinRele = 12;
void setup()
{
  pinMode(pinRele, OUTPUT);
  digitalWrite(pinRele, LOW);
  Serial.begin(9600);
}

void loop()
{
  char op = Serial.read();
  if (op == '1'){
    digitalWrite(pinRele, HIGH);
    Serial.println("Rele ligado");
  }
  else if(op == '0'){
    digitalWrite(pinRele, LOW);
    Serial.println("Rele Desligado");
  }
  delay(10);
}
