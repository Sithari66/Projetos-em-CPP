//Faça um algoritmo que:
//a) Crie um vetor de tamanho 10;
//b) Preencha cada posição do vetor com zero;
//c) Preencha cada posição do vetor com um número que seja igual ao quadrado do índice dessa posição (por exemplo, o terceiro elemento seria 9, pois 9 é o quadrado do índice da 3a. posição).
//d) Imprima os elementos do vetor que têm índice par.


#include<iostream>
using namespace std;

int main(){
	
int a[10] ;	
	

cout<<"\t\tLetra A";
cout<<"\n\n";	

for(int cont = 0; cont<10; cont++){

 a[cont] = cont*cont;

}


for(int cont = 0; cont<10; cont++){

 cout<<"\nPosicao " <<cont<<" - "<< a [cont]<<" - ";

}

cout<<"\t\tLetra B";
cout<<"\n\n";	

 int vetor[10];

 for(int cont = 0; cont < 10; cont++){
     vetor[cont] = 0;
    cout << vetor[cont] << "\n";  
   
} 

cout<<"\t\tLetra C";
cout<<"\n\n";	

for(int cont = 0; cont<10; cont++){
  if(a[cont]%2 == 0){
 cout<<"\nPosicao " <<cont<<" - "<< a [cont]<<" - ";
}

}

cout<<"\t\tLetra D";
cout<<"\n\n";

 int b[10];
 
for(int cont = 0; cont < 10; cont++){
    b[cont] = cont * 2;  
    cout << b[cont] << "\n";  
        }    




cout<<"\n\n";	
	

system("pause");
return(0);	
		
}
