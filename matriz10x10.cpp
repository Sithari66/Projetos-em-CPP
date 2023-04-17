#include<iostream>
using namespace std;

//Faça um programa que preenche uma matriz 10 x 10 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima a matriz.

int main(){

int matriz[10][10];
int linha;
int coluna;

for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            matriz[linha][coluna]=(linha + 1) * (coluna+1);
        }
    }

for(int linha = 0; linha < 10; linha++){

 cout<<"\n";
        
for(int coluna = 0; coluna < 10; coluna++){
          	
		  cout<<  matriz[linha][coluna]<<" | ";
        
		}
    }

cout<<"\n\n";

system("pause");
return(0);

}
