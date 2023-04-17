//Faça um algoritmo que determine o maior e o menor elemento e a média dos elementos de um vetor de 100 posições

#include<iostream>
using namespace std;

int main(){

int vetor[3];
int maior,menor,soma = 0;
	
for (int cont = 0; cont < 3; cont++){

cout<<"Digite um numero: ";
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

cout<<"\n\nMedia : "<< soma/10 << "\n\n";
cout<<"\n O maior valor e: "<< vetor[maior]<<"\n\n";
cout<<"\n O menor valor e: "<< vetor[menor]<<"\n\n";

    
cout<<"\n\n";

system("pause");
return(0);

}
