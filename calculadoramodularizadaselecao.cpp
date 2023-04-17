#include<iostream>
#include<math.h>
using namespace std;

float adicao(float n1, float n2){
     
     return(n1+n2);
     
     }

float subtracao(float n1, float n2){
     
     return(n1-n2);
     
     }
     
float multiplicacao(float n1, float n2){
     
     return(n1*n2);
     
     }
     
float divisao(float n1, float n2){
     
     return(n1/n2);
     
     }

float media(float n1, float n2){
     
     return((n1+n2)/2);
     
     }     
     
int main(){
	
int operacao,another;
float n1,n2;
string op;	
	
do{
	cout<<"\n\n\tCalculadora Modularizada\n\n1) Adicao\n2) Divisao\n3) Media\n4) Mutiplicacao\n5) Subtracao \n\nDigite qual operacao gostaria de fazer: ";
	cin>>operacao;

	system("cls");


if(operacao==1){
	
	cout<<"Insira 2 numeros para adicao: ";
	cin>>n1>>n2;
	
	cout<<"\nA soma de " <<n1<<" + "<<n2<<" e igual a "<<adicao(n1,n2);
	
}


if(operacao==2){
	
	cout<<"Insira 2 numeros para divisao: ";
	cin>>n1>>n2;
	
	cout<<"\nA Divisao de " <<n1<<" / "<<n2<<" e igual a "<<divisao(n1,n2);
	
}


if(operacao==3){
	
	cout<<"Insira 2 numeros para media: ";
	cin>>n1>>n2;
	
	cout<<"\nA Media de " <<n1<<" + "<<n2<< " / 2 "<<" e igual a "<<media(n1,n2);
	
	
}

if(operacao==4){
	
	cout<<"Insira 2 numeros para multiplicacao: ";
	cin>>n1>>n2;
	
	cout<<"\nA multiplicacao de " <<n1<<" * "<<n2<<" e igual a "<<multiplicacao(n1,n2);
	
	
}


if(operacao==5){
	
	cout<<"Insira 2 numeros para subtracao: ";
	cin>>n1>>n2;
	
	cout<<"\nA subtracao de " <<n1<<" - "<<n2<<" e igual a "<<subtracao(n1,n2);
}



cout<<"\n\nGostaria de ver outra questao (S ou N): ";
cin>>op;

system("cls");
	
}while(op=="S");




cout<<"\n\n";


system("pause");
return(0);

}
