#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int num1, num2, soma, sub, multi,div;

    cout << "Seja bem vindo a minha primeira calculadora" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    soma = num1 + num2;
    sub  = num1 - num2;
    multi = num1 * num2;
    div   = num1 / num2;

    cout << "A soma e: " << soma << endl;
    cout << "A subtracao e: " <<  sub << endl;
    cout << "O produto e: " << multi << endl;
    cout << "A divisao e: " << div << endl;

    system("pause");
    return 0;
}
