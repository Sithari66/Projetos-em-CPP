//Faça um algoritmo que:
//a) Leia dois vetores com o mesmo número de elementos (numéricos) de 50 posições.
//b) Calcule e imprima outros dois vetores que são a soma e a diferença (feitas casa por casa) dos dois vetores lidos.

#include<iostream>
using namespace std;

int main(){

int vet1[5], vet2[5] , soma[5] , sub[5] ;

for(int cont = 0; cont<5 ; cont++){

cout<<"\nDigite valor para posicao "<<cont+1<<" do Vetor 1 : ";
cin>>vet1[cont];
cout<<"\nDigite valor para posicao "<<cont+1<<" do Vetor 2 : ";
cin>>vet2[cont];

soma[cont] = vet1[cont] + vet2[cont];
sub[cont] = vet1[cont] - vet2[cont];

}	
	
for(int cont = 0; cont<5 ; cont++){

cout<<"\n"<<vet1[cont]<<" + "<<vet2[cont]<<" = "<<soma[cont];
cout<<"\n"<<vet1[cont]<<" - "<<vet2[cont]<<" = "<<sub[cont];

}

cout<<"\n\n";

system("pause");
return(0);

}
