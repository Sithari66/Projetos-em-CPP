//Faça um algoritmo que leia um grupo de fichas contendo datas no formato DD MM AA e imprima estas datas por extenso. Considere como flag DIA menor ou igual a zero

#include<iostream>
using namespace std;

int main(){

 string mes_vet[12] = {"Janeiro" , "Feveriro" , "Marco","Abril","Maio", "Junho","Julho","Agosto", "Setembro","Outubro","Novembro","Dezembro"};
 int dia,mes, ano; 	

do{
cout<<"\t\tDigite a data ";

do{

cout<<"\nDD: ";
cin>>dia;

}while(dia>31);

do{

cout<<"MM: ";
cin>>mes;

}while(mes>12 || mes<1);

cout<<"AA: ";
cin>>ano;

cout<<"Data: "<<dia<<" de "<<mes_vet[mes-1]<<" de 20"<<ano;
cout<<"\n\n";

}while(dia>0);	



system("pause");
return(0);

}
