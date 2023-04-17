#include <stdio.h>
#include <string.h>


  int main() {
      
        int linha, caracter = 0;
        char ch;
        FILE *arq, *arq1;
		char frase[256];
        char str[256], temp[] = "temp.txt";

		printf("Insira o nome do arquivo a ser aberto: ");
		scanf("%s",frase);		
        arq = fopen(frase, "r");
        if (!arq) 
		{
                printf("Arquivo não encontrado ou incapaz de abrir o arquivo de entrada!!\n");
                return 0;
        }
        arq1 = fopen(temp, "w"); // abre o arquivo temporário no modo de gravação
        if (!arq1) 
		{
                printf("Não é possível abrir um arquivo temporário para gravar!!\n");
                fclose(arq);
                return 0;
        }
        printf("Insira a linha que deseja remover: ");
        scanf("%d", &linha);
		linha++;
        // Copia todo o conteúdo para o arquivo temporário, exceto a linha específica
        while (!feof(arq)) 
        {
            strcpy(str, "\0");
            fgets(str, 256, arq);
            if (!feof(arq)) {
                caracter++;
                // Pula a linha no número de linha fornecidor 
                if (caracter != linha) {
                    fprintf(arq1, "%s", str);
                }
            }
        }
        fclose(arq);
        fclose(arq1);
        remove(frase);  		// Remove o arquivo original
        rename(temp, frase); 	// Renomeia o arquivo temporário para o nome original
// Faz a leitura do arquivo
   arq=fopen(frase,"r"); 
            ch=fgetc(arq); 
          printf("\nO conteúdo do arquivo %s e : \n",frase); 
          while(ch!=EOF) 
            { 
                printf("%c",ch); 
                 ch=fgetc(arq); 
            }
        fclose(arq);

        return 0;

  } 
