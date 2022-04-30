#include <math.h>
#include<iostream>
using namespace std;


int main(){


{
int x=1;

	cout<<"\tImpressao dos numeros de 1 ate 10\n\n";

while(x<=10){
	cout<<x<<" | ";
	x++;
}
}
cout<<"\n\n";

{

int x=10;

cout<<"\tImpressao dos numeros de 10 ate 1\n\n";

while(x>=1){
	cout<<x<<" | ";
	x--;
}

}

cout<<"\n\n";

{
	
	int x = 1;
	
	cout<<"\tImpressao dos numeros impares de 1 ate 100\n\n";
	
	while(x<=100){
		if(x%2==1)
		
			cout<<x<<" | ";
			x++;
	}
	
	
}

cout<<"\n\n";


{

int x=1;

cout<<"\tImpressao de numeros pares de 1 a 100\n\n";

	while(x<=100){
		if(x%2==0)
			cout<<x<<" | ";
			x++;
	
	
}
}


cout<<"\n\n";

{
	
	cout<<"\tImpressao de um vetor de 50 posicoes\n\n";
	
	int vetor[50];
	
	for(int i=0;i<50;i++){
		vetor[i]=i+1;
		cout<<vetor[i]<<" | ";
	}
	
}

cout<<"\n\n";

{
	
	cout<<"\tImpressao de um vetor de 50 posicoes elevados ao quadrado\n\n";
	
	int vetor[50];
	
	for(int i=0;i<50;i++){
		vetor[i]=pow(i,2);
		cout<<vetor[i]<<" | ";
	}
	
}

cout<<"\n\n";


{
	cout<<"\tImpressao de uma matriz de 10x10\n\n";
	
	int matriz[10][10];
	
	for(int linha=0;linha<10;linha++){
		
		cout<<"\n";
		
		for(int coluna=0;coluna<10;coluna++){
			matriz[linha][coluna]= (linha+1) * (coluna+1); //Adição de excessão de valor EX = 0 t0d0s srão 0 ou (linha+1)*coluna+1) será até o fim da matriz
			cout<<matriz[linha][coluna]<<" | ";
		}
	}
	
}

cout<<"\n";

{
	
	cout<<"\tImpressao de uma matriz 10x10 com 1 na diagonal\n\n";
	
	int matriz[10][10];
	
	for(int linha=0;linha<10;linha++){
		
		cout<<"\n";
		
		for(int coluna=0;coluna<10;coluna++){
			
			matriz[linha][coluna]=0;
			
			
			if(linha == coluna) matriz[linha][coluna]=1; //Define o numero na diagonal
			
				cout<<matriz[linha][coluna]<<" |  ";
		}
	}
	
}



cout<<"\n\n";
	
system("pause");
return(0);	
	
}
