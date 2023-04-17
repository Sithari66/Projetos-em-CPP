#include <stdio.h>
#include <string.h>


  int main() 
  {
        FILE *arq, *arq1;
        int linha, linhactr = 0;
        char str[256],frase[256];        
        char nlinha[256], temp[] = "temp.txt";
		
		printf("Insira o nome do arquivo a ser aberto: ");
        fgets(frase, 256, stdin);
        frase[strlen(frase) - 1] = '\0';
        arq = fopen(frase, "r");
        if (!arq) 
        {
                printf("Nao foi possível abrir o arquivo!!\n");
                return 0;
        }
        arq1 = fopen(temp, "w");
        if (!arq1) 
        {
                printf("Não é possível abrir um arquivo temporário para gravar!!\n");
                fclose(arq);
                return 0;
        }
        //Adiquir a nova linha digitada
        printf("\nInsira o conteúdo da nova linha: ");
        fgets(nlinha, 256, stdin);
        // Adiquirir o número da linha para excluir a linha específica 
        printf("\nInsira a linha que você deseja substituir: : ");
        scanf("%d", &linha);
        linha++;
         //Copia todo o conteúdo para o arquivo temporário, exceto a linha específica
        while (!feof(arq)) {
            
            strcpy(str, "\0");
            fgets(str, 256, arq);
            if (!feof(arq)) {
                linhactr++;
                if (linhactr != linha) {
                    
                        fprintf(arq1, "%s", str);
                    } 
                    
                    else{
                        fprintf(arq1, "%s", nlinha);
                    }
                }
        }
        fclose(arq);
        fclose(arq1);
        remove(frase);
        rename(temp, frase);
        printf("\nA substituição foi realizada com sucesso..!! \n");
        return 0;
  }
