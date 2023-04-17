#include <stdio.h> 
#include<string.h> 

int main () {
    
FILE *arq; 
int n; 
char str[100]; 
char frase[20] = "teste.txt"; 
char str1; 
char *pos; 

printf ("Insira o numero de linhas a serem escritas: ");
scanf ("%d", &n); printf ("\nDigite a sentenca que sera criada no arquivo:\n");
arq = fopen (frase, "w"); 
getchar(); 

for (int i = 0; i < n; i++) { 
    fgets (str, sizeof str, stdin);
    if(i==n-1){ if ((pos=strchr(str, '\n')) != NULL) *pos = '\0'; 
        } 
        
     fputs (str, arq); 
} 

fclose (arq);

// Lendo o arquivo  

arq = fopen (frase, "r"); 
printf ("\nO conteudo do arquivo %s e:\n", frase);
str1 = fgetc (arq); 

while (str1 != EOF) { 
    printf ("%c", str1); 
    str1 = fgetc (arq); 
    } 
    
printf ("\n\n"); 
fclose (arq);
return (0); 
}
