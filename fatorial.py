#Faça um programa em Python que calcule o fatorial de um número informado pelo usuário.

fatorial = int(input("Digite um numero: "))

fat = 1
i = 2

while i <= fatorial:
      fat = fat*i
      i = i + 1

print("\nO valor de %d! e =" %fatorial, fat)
