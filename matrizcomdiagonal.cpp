#include <iostream>
using namespace std;

//Estrutura de repetição aninhada
int main(){
    
    int matriz[10][10];
    
    //Primeiro laço de repetição para criação das linhas
    for(int linha=0;linha<10;linha++){
        cout<<"\n | "; // Pula a linha e acrescenta no começo de cada uma |
        
        
        //Segundo laço de repetição para criação das colunas
        for(int coluna=0;coluna<10;coluna++){
            
            matriz[linha][coluna] = 0; //Define o que sera acrescentado na matriz Ex: (linha+1)(coluna+1) resultaria no preenchimento da matriz de 1 a 100 ou em uma matriz menor até o fim dela somando sempre +1
            
            
            //Uma breve adição para tornar a matriz uma diagonal de 1 entre 0
            if(linha==coluna){
                matriz[linha][coluna]=1;
            }
            
            //Imprime a matriz e adiciona no fim de cada uma |
            cout<<matriz[linha][coluna]<<" | ";
        }
    }
    
    system("pause");
    return (0);
    
}
