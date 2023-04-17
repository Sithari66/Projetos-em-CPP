#include<iostream>
using namespace std;

float conversorf(float c){
      
    return((c* 9/5) + 32); 
       
}


float conversork(float k){
      
    return ((k - 32)*5/9 + 273.15); 
    
}


int main(){
	
float c,k;

cout<<"\tConversor de Celsius para Fahrenheit e Fahrenheit para Kelvin";
cout<<"\n\nDigite o valor em Celsius: ";
cin>>c;

cout<<"\nO resultado de graus Celsius para graus Fahrenheit e = "<<conversorf(c);

k = conversorf(c); //Armazena a variavel convertida em Fahrenhei

cout<<"\nO resultado de Fahrenheit para Kelvin e = "<<conversork(k);

cout<<"\n\n";
	
	
system("pause");
return(0);	
	
}
