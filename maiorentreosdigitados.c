#include <stdio.h>

int main(){
    
int n1,n2,n3, maior;

printf("Digite três números: ");
scanf("%d%d%d",&n1,&n2,&n3);


if(n1>n2)
    if(n1>n3)
        maior = n1;
    else
        maior = n3;
    
else
    if(n2>n3)
        maior = n2;
    else
        maior = n3;
        
printf("Os numeros digitados foram %d , %d e %d o maior entre eles e %d ",n1,n2,n3,maior);

}
