#include <stdio.h>
#include <stdlib.h> 
  
int main()
{
   char str[1000];
   FILE *arq;
   char frase[20]="teste.txt";

   arq=fopen(frase,"w");    
   if(arq==NULL)
   {
      printf("Erro na abertura do arquivo!");
      exit(1);
   }
   printf(" Digite a frase a ser inserida no arquivo:");
   fgets(str, sizeof str, stdin);
   
   fprintf(arq,"%s",str);
   fclose(arq);
   
   printf("\nO arquivo %s foi criado com sucesso...!!\n\n",frase);
   return 0;
   
}
