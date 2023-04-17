#include <stdio.h>

int main(){
    
char nota;

printf("Digite i - b - m ou e: ");
scanf("%c",&nota);

switch(nota){

    case 'i':{
        printf("Insuficiente");
        break;
    }
    
    case 'b':{
        printf("Boa");
        break;
    }
    
    case 'm':{
        printf("Média");
        break;
    }

    case 'e':{
        printf("Excelente");
        break;
    }
    
    default:
        return 0;

}
}
