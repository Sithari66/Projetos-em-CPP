#include <iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==2){
        
        return 1;
    }
    
   return fib(n-1)+fib(n-2);
}

int main() {
  
  int n;
  
  cout<<"\tCalculo da Sequenciua de Fibonacci";
  cout<<"\n\nDigite um numero para ser calculado: ";
  cin>>n;
  
  cout<<n<<" na sequencia de fibonacci e igual a "<<fib(n);
  
    system("pause");
    return 0;
}
