#Crie um programa em Python que cadastre informações de várias pessoas (nome, idade) em um dicionário. Depois coloque todas as pessoas menores de 18 anos em um novo dicionário.

total = {}
menoresde18 = {}
informe = int(input("Digite quantas pessoas serão cadastradas: "))

i=0

while (i != informe):
    nome = input("\nDigite o nome da pessoa: ")
    idade = input("Digite a idade da pessoa: ")
    total[nome]= idade 
    i = i + 1

for x in total:

    if(int(total[x])<18):
        menoresde18[x]=total[x]

print("\nInforme dos menores de 18 anos")
print (menoresde18)
print("\nInforme total: ")
print(total)
