#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *arq, *arq1;
	char ch, frase[20], frase1[20];


	printf("Insira o nome do arquivo de origem: ");
	scanf("%s",frase);

	arq=fopen(frase, "r");
	if(arq==NULL){
		printf("Arquivo não encontrado ou erro na abertura.!!");
		exit(1);
	}
	
	printf("Insira o novo nome do arquivo: ");
	scanf("%s",frase1);
    arq1 = fopen(frase1, "w");
	if(arq1==NULL){
		printf("Arquivo não encontrado ou erro na abertura.!!");
		fclose(arq);
		exit(2);
	}
	
	while(1){
	    
		ch=fgetc(arq);
		if(ch==EOF){
		    
			break;
		}
		else
		{
			fputc(ch, arq1);
		}
	}
	
	printf("O Arquivo %s foi copiado com sucesso no arquivo %s. \n\n",frase,frase1);
	fclose(arq);
	fclose(arq1);
	getchar();
}
