#include <math.h>
#include <iostream>
using namespace std;

int main(){
    
    //Declaracao do vetor
    int vetor[10];
    
    //Primeiro laço de repetição para criação do vetor
    for(int i=0;i<10;i++){
        vetor[i]=pow(i,2); //Potencializa o vetor a partir de seu começo com a base definida EX: 2
        
        //Imprime o vetor
        cout<<vetor[i]<<" | ";
        }
    
    system("pause");
    return (0);
    
}
