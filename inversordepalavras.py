palavra = input("Favor digite uma palavra: ")

inverso = ""

tamanho = len(palavra)

while(tamanho >= 1):

    tamanho -= 1

    inverso += palavra[tamanho]

if(palavra == inverso):

    print("Esta palavra e um Palindromo: ")

else:

    print("O inverso da Palavra: " + inverso)
