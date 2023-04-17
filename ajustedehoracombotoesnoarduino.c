//Crie uma maneira de ajustar as horas, minutos e segundos usando, pelo menos, três botões: um para incrementar os números, outro para decrementar, e o terceiro para selecionar a opção de qual variável deseja ajustar. Use o Monitor Serial para mostrar mensagens da opção selecionada e os valores ajustados

#define bt1 12
#define bt2 8
#define bt3 4

int seg = 0, min=0, hor=0;
int op = 0;

void setup(){
  pinMode(bt1,INPUT_PULLUP);
  pinMode(bt2,INPUT_PULLUP);
  pinMode(bt3,INPUT_PULLUP);
  
  Serial.begin(9600);
  Serial.println("\tMENU DE SELECAO\n");
  Serial.println("1. Aperte 1 vez o terceiro botao para alterar as Horas");
  Serial.println("2. Aperte 2 vez o terceiro botao para alterar as Minutos");
  Serial.println("3. Aperte 1 vez o terceiro botao para alterar as Segundos");
 
}
