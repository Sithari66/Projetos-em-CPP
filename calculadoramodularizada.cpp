#include<iostream>
#include<math.h>
using namespace std;

void adicao(float n1, float n2){
     
     cout<<"\nA soma e igual a: "<<n1+n2;
     
     }

void subtracao(float n1, float n2){
     
     cout<<"\nA subtracao e igual a: "<<n1-n2;
     
     }
     
void multiplicacao(float n1, float n2){
     
     cout<<"\nA multiplicacao e igual a: "<<n1*n2;
     
     }
     
void divisao(float n1, float n2){
     
     cout<<"\nA divisao e igual a: "<<n1/n2;
     
     }

void potenciacao(float n1, float n2){
     
     cout<<"\nA potenciacao e igual a: "<< pow(n1,n2)<<"\n\n";
     
     }     
     
int main(){

float n1,n2;

cout<<"Insira 2 numeros: ";
cin>>n1>>n2;

adicao(n1,n2);
subtracao(n1,n2);
multiplicacao(n1,n2);
divisao(n1,n2);
potenciacao(n1,n2);

system("pause");
return(0);

}
