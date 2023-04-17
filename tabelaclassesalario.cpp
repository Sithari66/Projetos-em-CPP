// Os funcionários da MARIA DA PENHA CONFECÇÕES têm seus salários de acordo com a classe, conforme tabela:
// Classe 1 = 800 | Classe 2 = 1100 | Classe 3 = 1100 | Classe 4 = 1500 | Classe 5 = 2500 | Classe 6 = 4000 | Classe 7 = 6000

#include<iostream>
using namespace std;

int main(){
        
string nome[7];
int classe[7],priClasse=0,segClasse=0,terClasse=0,quaClasse=0,quiClasse=0,sexClasse=0,setClasse=0,maiorClasse=0,clas;
float salario[7]={800,1000,1100,1500,2500,4000,6000};
        
for(int cont=0;cont<7;cont++){
                
cout<<"\nDigite o nome: ";
cin>>nome[cont];
                
cout<<"\nDigite a classe: ";
cin>>classe[cont];  

//total de cada classe

if(classe[cont]==1){
 
 priClasse=priClasse+1;

}     
             
if(classe[cont]==2){
 
 segClasse=segClasse+1;

} 
             
if(classe[cont]==3){
 
 terClasse=terClasse+1;

} 
             
if(classe[cont]==4){
 
 quaClasse=quaClasse+1;
             
} 
             
if(classe[cont]==5){
                
quiClasse=quiClasse+1;

} 
             
if(classe[cont]==6){
                
sexClasse=sexClasse+1;
             
}
             
if(classe[cont]==7){
                
setClasse=setClasse+1;

}  
             
//maior classe e contagem de classe 
             
if(priClasse>maiorClasse){ 
                
	maiorClasse=priClasse;
	clas=classe[cont];

}else if(segClasse>maiorClasse){
                
	maiorClasse=segClasse;
    clas=classe[cont];
             
}else if(terClasse>maiorClasse){
                
	maiorClasse=terClasse;
    clas=classe[cont];
             
}else if(quaClasse>maiorClasse){
                
	maiorClasse=quaClasse;
    clas=classe[cont];

}else if(quiClasse>maiorClasse){
   
   maiorClasse=quiClasse;
   clas=classe[cont];

}else if(sexClasse>maiorClasse){
    
	maiorClasse=sexClasse;
    clas=classe[cont];

}else if(setClasse>maiorClasse){
  maiorClasse=setClasse;
  clas=classe[cont];
}                                                                 

}

for(int cont=0;cont<7;cont++){

cout<<"\nNome: "<<nome[cont]<<" seu salario e =  "<<salario[classe[cont]-1];

} 

cout<<"\n";
cout<<"\nTotal da classe 1: "<<priClasse;
cout<<"\nTotal da classe 2: "<<segClasse;
cout<<"\nTotal da classe 3: "<<terClasse;
cout<<"\nTotal da classe 4: "<<quaClasse;
cout<<"\nTotal da classe 5: "<<quiClasse;
cout<<"\nTotal da classe 6: "<<sexClasse;
cout<<"\nTotal da classe 7: "<<setClasse;    
cout<<"\nA classe com mais funcionarios e: "<<clas<<"\nE o total da classe: "<<maiorClasse;
                                        
cout<<"\n";
system("pause");
return(0);
    
}
