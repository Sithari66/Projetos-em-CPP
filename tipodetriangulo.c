#include <stdio.h>

int main(){
    
int t1,t2,t3;

printf("Digite três valores: ");
scanf("%d%d%d",&t1,&t2,&t3);

if(t1 + t2 > t3 && t1 + t3 >t2 && t2 + t3 > t1)

    printf("\n\tOs Tres lados forma um triangulo!!");

    if(t1==t2 && t1 == t3)
        printf("\n\nTriângulo equilátero");

else
        
    if(t1==t2 || t1 == t3)
        printf("\n\nTriângulo Isósceles");

else
    printf("\n\nTriângulo Escaleno");
    
}
