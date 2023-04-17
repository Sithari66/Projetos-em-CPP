#include <stdio.h>

int main(){
    
	int status;
	char frase[20];
	
	printf("Insira o nome do arquivo a ser excluído: ");
	scanf("%s",frase);
	status=remove(frase);
	if(status==0)
	{
		printf("\nO arquivo  %s foi excluído com sucesso..!! \n\n",frase);
	}
	else
	{
		printf("Nao foi possível excluir o arquivo %s\n\n",frase);
	}
	
	return(0);
	
}
