#include <iostream>
using namespace std;

//Fatorial modularizado
int fatorial(int n, int fat=1){ 
    
    for(fat;n>1;n=n-1){
        fat=fat*n;
    }
    
   return fat;
}

int main() {
  
  int n;
  
  cout<<"\tCalculo Fatorial N!";
  cout<<"\n\nDigite um numero para ser calculado: ";
  cin>>n;
  
  cout<<n<<" fatorado e igual a "<<fatorial(n);
    
    system ("pause");
    return (0);
}
