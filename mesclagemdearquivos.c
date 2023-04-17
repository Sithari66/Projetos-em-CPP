#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *arq, *arq1, *arqn;
	char ch, frase[20], frase1[20], frase2[30];

	printf("Insira o primeiro nome do arquivo: ");
	scanf("%s",frase);
	printf("Insira o segundo nome do arquivo: ");
	scanf("%s",frase1);
	printf("Insira o novo nome do arquivo onde mesclar os dois arquivos: ");
	scanf("%s",frase2);
	arq=fopen(frase, "r");
	arq1=fopen(frase1, "r");
	if(arq==NULL || arq1==NULL){
    //Mensagem de erro
		printf("\nO arquivo não existe ou erro ao abrir...!!\n");
		exit(EXIT_FAILURE);
	}
	arqn=fopen(frase2, "w");
	if(arqn==NULL){
     //Mensagem de erro
		printf("\nO arquivo não existe ou erro ao abrir...!!\n");
		exit(EXIT_FAILURE);
	}
	while((ch=fgetc(arq))!=EOF)
	{
		fputc(ch, arqn);
	}
	while((ch=fgetc(arq1))!=EOF)
	{
		fputc(ch, arqn);
	}
	printf("\nOs dois arquivos se fundiram em %s com sucesso..!!\n\n", frase2);
	fclose(arq);
	fclose(arq1);
	fclose(arqn);
}
