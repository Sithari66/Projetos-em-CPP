//Construir um algoritmo que leia um vetor de 50 elementos inteiros e que determine o maior elemento deste vetor

#include<iostream>
using namespace std;

int main(){

int vetor[5];
int maior;
	
for (int cont = 0; cont < 5; cont++){

cout<<"Digite um numero: ";
cin>>vetor[cont];

}        

for(int cont = 0; cont < 5; cont++){

if(cont == 0){

maior = cont;

}

else{

if(vetor[cont] > vetor[maior]){

maior = cont;

}
}
}

cout<<"\n O maior valor e: "<< vetor[maior]<<"\n\n";

system("pause");
return(0);

}
