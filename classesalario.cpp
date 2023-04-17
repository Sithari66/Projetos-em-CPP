//Uma empresa tem os salários dos seus funcionários padronizados por classe
// Classe 1 = 800 | Classe 2 = 1600 | Classe 3 = 2000 | Classe 4 = 2100 | Classe 5 = 2200 | Classe 6 = 2500 | Classe 7 = 2600 | Classe 8 = 2700 | Classe 9 = 3000 | Classe 4 = 4000
//Supondo que a empresa tem 1500 funcionários, faça um algoritmo que leia a CLASSE e o NOME do funcionário e imprima seu nome juntamente com seu salário.

#include <iostream> 
using namespace std; 
     
int main() {   
    
string nome[1500];  
int classe[1500];  
float salarios[10]={800,1600,2000,2100,2200,2500,2600,2700,3000,4000}; 
    
     
for(int cont=0;cont<2;cont++){ 

cout<<"\nDigite o Nome: ";
cin>>nome[cont];

cout<<"Digite a Classe: ";
cin>>classe[cont];     
    
}  

for(int cont=0;cont<2;cont++){ 

cout<<"\nNome: "<<nome[cont]<<" seu salario e = "<<salarios[classe[cont]-1]<<"\n";;
 
}
    	
cout<<"\n";   

system("pause");
return (0); 
    
}
