#include<iostream>
using namespace std;

int main(){

int questao,another;
string op;

do{
	
cout<<"\nDigite a questao requerida: ";
cin>>questao; 

system("cls");

/*Estrutura Condicional + Impressão de "TESTE"*/

if(questao==1){

cout<<"TESTE";	

}


/*Estrutura Condicional + Impressão de 1 a 10*/

if(questao==2){
	
int x = 1;

while(x<=10){
	cout<<x<<"\n";
	x++;
}

}

/*Estrutura Condicional + Impressão de 1 a 1000*/

if(questao==3){
	
	int x = 1;
	
while(x<=1000){
	cout<<x<<"\n";
	x++;
}

}

/*Estrutura Condicional + Impressão de 1000 a 1*/

if(questao==4){

	int x = 1000;
	
while(x>=1){
	cout<<x<<"\n";
	x--;
}

}

/*Estrutura Condicional + Impressão de 1 a 1000 retirando os Ímpares*/
	
if(questao==5){
	
    int x = 1;

while( x <=1000){
	if(x%2==1)
		cout<<x<<"\n";
	x++;

}

}

/*Estrutura Condicional + Impressão de 1 a 1000 retirando os Pares*/

if(questao==6){
	
    int x = 1;

while( x <=1000){
	if(x%2==0)
		cout<<x<<"\n";
	x++;

}

}


cout<<"\n\nGostaria de ver outra questao ?(S ou N): ";
cin>>op;

}while(op=="S");



system ("pause");
return (0);

}
