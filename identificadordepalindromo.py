#Crie um programa em Python que inverta as palavras informadas pelo usuário e caso elas forem idênticas imprimir n console que são Palíndromos. Ex: ele, ama, ata.

aux = str(input("Digite uma palavra: ")).strip().upper()
palavras = aux.split()
frase = ''.join(palavras)
tamanho = len(frase)-1
inverso = ''

for i in range(tamanho, -1, -1):
    inverso += frase[i]

print("\nO inverso de {} é {}".format(frase, inverso))

if frase == inverso:
    print("\nForma um palíndromo")
else:
    print("\nNão forma um palíndromo")
