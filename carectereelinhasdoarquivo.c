#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *arq; 
    char str; 
    int palavras=1,caracteres=1;
    char frase[20];
 
	printf("Insira o nome do arquivo a ser aberto: ");
	scanf("%s",frase);    

    arq=fopen(frase,"r"); 
    if(arq==NULL) { 
         printf("O arquivo não existe ou não pode ser aberto."); 
      } 
      
    else { 
          str=fgetc(arq); 
          printf("O conteudo do arquivo %s e : ",frase); 
          while(str!=EOF) 
            { 
                printf("%c",str); 
                if(str==' '||str=='\n')
                    { 
                        palavras++; 
                    }
                    else
                    {
                        caracteres++; 
                    }
                str=fgetc(arq); 
            }
        printf("\nO número de palavras no arquivo %s sao: %d\n",frase,palavras); 
        printf("O número de caracteres no arquivo %s sao: %d\n\n",frase,caracteres-1);         
        } 
    fclose(arq); 
    return 0;
}
