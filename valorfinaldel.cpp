#. Qual será o valor de L ao final da execução do trecho de algoritmo abaixo?
#lógico: A, B, C;
#real: X, Y;
#inteiro: L;
#A <- falso; B <- verdadeiro;
#C <- falso; X <- 11.5;
#Y <- 3.2; X <- X + 1;
#se C ou ((X + Y > 5) ou (não A e B))
#então L <- 0;
#senão L <- 1;
#fimse;

#include<iostream>
using namespace std;

int main (){

  bool a,b,c;
  float x,y;
  int l;
  
  x = false;
  c= false;
  y = 3.2;
  b = true;    
  x = 11.5;
  x++; //x=x+1
  
  if (c || ((x+y>5) || (!a && b))){
  	 l = 0;
  }
  else{
   l = 1;
  
  }
  
  cout<< "Valor de L = "<< l ;
  cout<<"\n\n";
  
  system("pause");
  
  return (0); 
}
