#include <iostream>
#include <math.h>
using namespace std;

struct aluno{ 
    string nome;   
    string nasc;
    int mat;
    string end;
    bool aprovado;
    float nota;
};

int main() {

aluno cadastro[2];

for (int i=0; i<2; i++) { 
cout<<"\n\t\tID de Cadastro: "<<i+1;
cout<<"\n\nDigite o nome do aluno: ";
cin>>cadastro[i].nome;

cout<<"Digite sua data de nascimento: ";
cin>>cadastro[i].nasc;

cout<<"Digite sua matricula: ";
cin>>cadastro[i].mat;

cout<<"Digite seu endereco: ";
cin>>cadastro[i].end;

cout<<"Aprovado ? (0/1): ";
cin>>cadastro[i].aprovado;

cout<<"Digite sua nota: ";
cin>>cadastro[i].nota;

}

system("cls");

	for (int i=0; i<2; i++) { 
		cout<<"\n\t\tID Cadastrado: "<<i+1;

		cout<<"\n\nO nome do aluno e: "<<cadastro[i].nome;
		cout<<"\nA data de nascimento e: "<<cadastro[i].nasc;
		cout<<"\nA matricula e: "<<cadastro[i].mat;
		cout<<"\nO endereco e: "<<cadastro[i].end;


			if(cadastro[i].aprovado==1){

				cout<<"\nO aluno foi aprovado";

			}

			else{
	
				cout<<"\nO aluno foi reprovado";
	
			}
	
	cout<<"\nA nota do estudante e: "<<cadastro[i].nota<<"\n\n";
	
	system("pause");
	system("cls");

	}

system("pause");
return (0);
}
