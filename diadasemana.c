#include <stdio.h>

int main(){
    
int dia;

printf("Digite o numero de um dia da semana: ");
scanf("%d",&dia);

switch(dia){

    case 1:{
        printf("Domingo");
        break;
    }
    
    case 2:{
        printf("Segunda");
        break;
    }
    
    case 3:{
        printf("Terca");
        break;
    }

    case 4:{
        printf("Quarta");
        break;
    }
    
     case 5:{
        printf("Quinta");
        break;
    }
    
     case 6:{
        printf("Sexta");
        break;
    }
    
     case 7:{
        printf("Sabado");
        break;
    }
    
    default:
        return 0;

}
}
