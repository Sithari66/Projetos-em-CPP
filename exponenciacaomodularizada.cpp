#include <iostream>
#include<math.h>
using namespace std;

float potenciacao(float n1, float n2){
	  
      return(pow(n1,n2));
      
}

int main(){
	
	float x,a;
	cout<<"Digite um numero base: ";
	scanf("%f",&x);
	cout<<"Digite o expoente: ";
	scanf("%f",&a);
	cout<<"\n";
	
	cout<<"O resultado da exponenciacao e: "<<potenciacao(x,a);
	
}
