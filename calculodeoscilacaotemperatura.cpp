// Construir um algoritmo que leia as temperaturas registradas em BELO HORIZONTE de janeiro a julho de 2006 (212 dias) e calcular e imprimir:
//a) a maior temperatura.
//b) a menor temperatura.
//c) a temperatura média.
//d) o número de dias em que a temperatura esteve abaixo da média.

#include<iostream>
using namespace std;

int main(){

int vetor[3];
int maior,menor,soma = 0;
	
for (int cont = 0; cont < 3; cont++){

cout<<"Digite a temperatura : ";
cin>>vetor[cont];

}        

for(int cont = 0; cont < 3; cont++){

soma += vetor[cont];

if(cont == 0){

maior = cont;
menor = cont;

}

else{

if(vetor[cont] > vetor[maior]){

maior = cont;

}

if(vetor[cont] < vetor[menor]){
	
menor = cont;
	
}
}
}

for(int cont = 0; cont < 10; cont++){

if(vetor[cont]){

cout<<"\n\nAs posicao(oes) que esta(o) armazenado(s) este(s) dado(s) e(sao): "<<cont<<"\n";  

}
}

cout<<"\n\nMedia : "<< soma/10 << "\n\n";
cout<<"\n O maior valor e: "<< vetor[maior]<<"\n\n";
cout<<"\n O menor valor e: "<< vetor[menor]<<"\n\n";
cout<<"\n\n";

}
