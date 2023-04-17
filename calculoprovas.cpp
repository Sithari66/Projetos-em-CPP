//Escreva um programa que leia dois números inteiros informados pelo usuário, calcule e imprima:
// A soma dos números 
// A subtração dos números
// A multiplicação dos números
// O quociente inteiro da divisão
// O resto da divisão
// O resultado da divisão real
// O resultado da potenciação do 1º número elevado ao 2º

#include<iostream>
using namespace std;

int main(){
	
float port,mat,dir,med_ari,med_pond;

cout<<"\t\Notas da prova";
cout<<"\n\nProva de Portugues : ";
cin>>port;

cout<<"\nProva de Matematica : ";
cin>>mat;

cout<<"\nProva de Direito : ";
cin>>dir;
	
cout <<"\nMedia Aritmetica = " << (port+mat+dir)/3<<" pontos ";
cout << "\n";
cout <<"\nMedia ponderada = " << (2*port+4*mat+3*dir)/(2+4+3)<<" pontos "; 
cout << "\n";


system("pause");
return(0);
}
