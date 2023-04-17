#Crie um programa em Pyhton para imprimir os números pares em um intervalo de dois números informados pelo Usuário.

number1 = int(input("Digite o primeiro numero: "))
number2 = int(input("Digite o segundo numero: "))

number2 = number2 +1
for n in range (number1,number2):
    if(n%2==0):
         print(n, end=' ')

print("\nAcabou todos os numeros foram impressos")   
