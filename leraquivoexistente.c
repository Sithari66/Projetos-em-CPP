#include <stdio.h>
#include <stdlib.h>

 
int main(){
    FILE *arq;
    char arquivo[20];
    char str;
    printf("Insira o nome do arquivo a ser aberto: ");
    scanf("%s",arquivo);
    arq = fopen (arquivo, "r");  
    if (arq == NULL)
    {
        printf("Este arquivo não existe e não pode ser aberto.\n");
        exit(0);
    }
    printf("\nO conteúdo do arquivo é %s é:\n",arquivo);
    str = fgetc(arq);
    while (str != EOF)
        {
            printf ("%c", str);
            str = fgetc(arq);
        }
    fclose(arq);
    printf("\n\n");
}
