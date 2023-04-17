#include <stdio.h>

int main ()
{
  FILE * arq;
  int i,n;
  char str[100];
  char frase[20];
  char str1;
  
	printf("Insira o nome do arquivo a ser aberto: ");
	scanf("%s",frase);		
	
    arq = fopen(frase, "a"); 
    printf("Insira o numero de linhas a serem escritas: ");
    scanf("%d", &n);
    
    printf("Insira o que ira acrescentar : \n");  
    for(i = 0; i < n+1;i++){
  
    fgets(str, sizeof str, stdin);
    fputs(str, arq);

  }

  fclose (arq);
  
// Ler o arquivo depois das linhas acrescentadas
	arq = fopen (frase, "r");  
	printf("\nO conteudo do arquivo %s e:\n",frase);
	str1 = fgetc(arq);
	while (str1 != EOF){
		
			printf ("%c", str1);
			str1 = fgetc(arq);
		}

    printf("\n\n");
    fclose (arq);
    return 0;
} 
