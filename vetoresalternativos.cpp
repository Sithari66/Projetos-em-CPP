//Faça um algoritimo que:

// A) Crie um vetor de Tamanho 10;

#include <iostream>
using namespace std;

int main(){
    
    int vetor[10];

    return 0;
}

// B) Preencha cada valor do vetor com zero;

#include <iostream>
using namespace std;

int main(){
    
    int vetor[10];
    
    for(int i=0;i<10;i++){
        
        
            cout<<vetor[i]<<"|"; 
    }

    return 0;
}

// C) Preencha cada posição do vetor com um número que seja igual ao quadrado do índice dessa posição;

#include <math.h>
#include <iostream>
using namespace std;


int main(){
    
    int vetor[10];
    
    for(int i=0;i<10;i++){
        vetor[i]=pow(i,2);
    }

    return 0;
}

// D) Imprima os elementos do vetor que tem índice par;

#include <math.h>
#include <iostream>
using namespace std;


int main(){
    
    int vetor[10];
    
    for(int i=0;i<10;i++){
        vetor[i]=pow(i,2);
        
        
        if(vetor[i]%2==0){
            cout<<vetor[i]<<"|";
        }
    }

    return 0;
}

