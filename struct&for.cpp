#include<iostream>
using namespace std;

struct aluno{
	
	int numero;
	string nome;
};

int main(){

aluno cadastro[2]; //Para incrementar + de 1 adicionar o numero de vezes que irá percorrer na estrutura

for(int i=0;i<2;i++){

cout<<"\nDigite o nome do aluno(a): ";
cin>>cadastro[i].nome;

cout<<"Digite seu numero na chamada: ";
cin>>cadastro[i].numero;

}

system("cls");

for(int i=0;i<2;i++){

cout<<"\n\n\t\tCADASTRO: "<<i,1;

cout<<"\n\nO nome do(a) aluno(a) e: "<<cadastro[i].nome;
cout<<"\nO numero dele(a) na chamada e: "<<cadastro[i].numero;	

}
cout<<"\n\n";
	
system("pause");	
return(0);
	
}
