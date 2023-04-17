#include <stdio.h>
#include <stdlib.h>

int main(){
    
FILE *arq;
char frase[20];
char str, clinha = 'f';
int qlinha;
int linhas = 0;

printf("Insira o nome do arquivo a ser aberto: ");
scanf("%s",frase);
arq = fopen(frase, "r");

if (arq == NULL){
    printf("Este arquivo não existe e não pode ser aberto.\n");
    exit(0);
}
    while((qlinha = fgetc(arq)) != EOF){
        clinha = 't';

        if(qlinha == '\n'){
            linhas++;
        }
    }

    if(clinha == 't'){
        linhas++;
    }

printf("As linha do arquivo %s sao: %d",frase, linhas);
fclose(arq);
printf("\n\n");
return(0);
}
