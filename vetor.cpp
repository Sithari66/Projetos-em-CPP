#include <iostream>
using namespace std;

int main(){
    
    //Declaracao do vetor
    int vetor[10];
    
    //Primeiro laço de repetição para criação do vetor
    for(int i=0;i<10;i++){
        vetor[i]=i+1; //Acresceta +1 até chegar no fim do vetor além de definir seu inicio em 1
        
        //Imprime o vetor
        cout<<vetor[i]<<" | ";
        }
    
    system("pause");
    return (0);
    
}
