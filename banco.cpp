//Escreva um algoritmo que leia o saldo atual de um cliente do banco CITYBANK, leia os valores de duas retiradas e de um depósito. Calcular e imprimir:
//1. O saldo atual.
//2. O total das retiradas.
//3. O total de depósitos.
//4. O saldo final.

#include<iostream>
using namespace std;

int main(){

float saldo_atual,primeira_retirada,segunda_retirada,total_de_retiradas,primeiro_deposito,total_de_depositos,saldo_final,resultado;

cout<<"\t\tBanco CITYBANK";
cout<<"\n\nSaldo Atual : ";
cin>> saldo_atual;

cout<<"\nPrimeira retirada : ";
cin>>primeira_retirada;

cout<<"\nSegunda retirada : ";
cin>>segunda_retirada;

cout<<"\nPrimeiro deposito : ";
cin>>primeiro_deposito;

cout<<"\nTotal de retiradas = 2\n", total_de_retiradas;
cout<<"\nTotal de depositos = 1\n", total_de_depositos;

resultado = (saldo_atual-primeira_retirada-segunda_retirada+primeiro_deposito);
saldo_final = (resultado);

cout<<"\n\nSaldo Final = " << saldo_final<<" reais "<<"\n\n";

system("pause");
return(0);

}

