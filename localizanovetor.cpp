//Faça um algoritmo que:
//Leia uma variável de 100 elementos (vetor) alfanuméricos (nomes de cidades) e verifique se existem elementos iguais a "BELO HORIZONTE". Se existirem, imprimir as posições que eles estão armazenados.


#include<iostream>
using namespace std;

int main(){

string vetor[10],cidade;
	
for (int cont = 0; cont < 10; cont++){

cout<<"Digite o nome da cidade: ";
cin>>vetor[cont];

}        

for(int cont = 0; cont < 10; cont++){

if(vetor[cont] == "Belo_Horizonte"){

cout<<"\n\nAs posicao(oes) que esta(o) armazenado(s) este(s) dado(s) e(sao): "<<cont<<"\n";  

}

}

cout<<"\n\n";

system("pause");
return(0);

}
