#include <iostream>
using namespace std;


int tamanhoVet(){
    int tam;
    cout<<"Informe o tamanho do Vetor: ";
    cin >> tam;

    return tam;
}


void PreencheVetor (int vetor[], int num){
	for(int cont=0; cont<num; cont++){
		cout<<"\nInforme o "<<cont+1 <<" numero: ";
		cin>>vetor[cont];
	}
	    cout<<"\n\n";
}

void ListaOriginal(int vetor[], int num){
	cout<<"Lista original: | ";
	for(int cont=0; cont<num; cont++){
		cout<<vetor[cont]<<" | ";
	}
}

void ListaRepetidos(int vetor[], int num){
	int aux;
	cout<<"\n\nOs numeros repetidos foram: | ";
	
	for(int cont=0; cont<num; cont++){
		for(int cont1=cont+1; cont1<num; cont1++){
			if(vetor[cont] == vetor[cont1]){
				aux++;
			}
		}
		
		if(aux==0){
			cout<<vetor[cont]<<" | ";
		}
		aux = 0;
	}
	
	    cout<<"\n\n";
}

int main(){

int num;

num = tamanhoVet();

int original[num];
    
PreencheVetor (original,num);

ListaOriginal(original,num);

ListaRepetidos(original,num);

}
