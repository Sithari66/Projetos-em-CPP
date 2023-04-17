// Construir um algoritmo que leia NOME, ALTURA e SEXO de um grupo indeterminado de pessoas e que calcule e imprima:
//a) A média de altura dos homens.
//b) A maior altura.
//c) A menor altura.

#include<iostream>
using namespace std;

int main(){

string nome,sexo,op;
float altura, soma_alt_h = 0,maior = 0 , menor = 0;
int cont_h = 0;

do{

cout<<"Digite seu Nome : ";
cin>>nome;

cout<<"\nDigite sua Altura : ";
cin>>altura;

cout<<"\nDigite seu Sexo (M ou F): ";
cin>>sexo;

cout<<"\n\nGostaria de efetuar um novo cadastro (Sim or Nao) ?  ";
cin>>op;

if(sexo == "M" || "m"){
	soma_alt_h += altura;
	cont_h++;
}

 if(altura>maior){
 	maior = altura;
 }
 
  if(altura<menor){
 	menor = altura;
 }
    
system("cls");

}while(op == "Sim");

cout<<"\nA media de altura entre os homens e = "<<soma_alt_h/cont_h;
cout<<"\nA maior altura e = "<<maior;
cout<<"\nA menor altura e = "<<menor;

cout<<"\n\n";    


system("pause");
return(0);

} 
