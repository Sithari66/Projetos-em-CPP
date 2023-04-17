#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
void main(){

int a = 2;
char b = 'Y';

//Codigo de exemplo com if
if(a == 1){
printf("\n Opcao escolhida 1\n");

}else if (a == 2){
 printf("\n Opcao escolhida 2\n");
}else if (a == 3){
 printf("\n Opcao escolhida 3\n");
}else{
 printf("\n Opcao invalida\n");
}

//O mesmo codigo de cima, adptado ao Switch
switch(a){
    case 1:
    printf("\n Opcao escolhida 1\n");
    break;
    case 2:
    printf("\n Opcao escolhida 2\n");
    break;
    case 3:
    printf("\n Opcao escolhida 3\n");
    break;
    default:
    printf("\n Opcao invalida\n");
    break;
}

//Switch com Char

switch(b){
case 'x':
    printf("\n A lera e x\n");
    break;
default:
    printf("\n Opcao invalida\n");
    break;
}

system("pause");

}
