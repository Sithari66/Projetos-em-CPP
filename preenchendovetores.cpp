//Faça um algoritmo que:
//a) Preencha um vetor com 30 ocorrências de zeros;
//b) Preencha este mesmo vetor com 1, 2, 3 ... até 30.


#include<iostream>
using namespace std;

 int main(){
 
 int vetor[30];

 for(int cont = 0; cont<30; cont++){
     vetor[cont] = 0;
     cout << vetor[cont] << "\n";  
    
} 
       
cout<<"\n\n";	   
	     
for(int cont = 0; cont<sizeof(vetor)/4; cont++){
    vetor[cont] = cont + 1;  
    cout << vetor[cont] << "\n";  
        }               
        
system ("pause");
return (0);
}
