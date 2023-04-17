palavra = input("Favor digite uma palavra: ")

inverso =  palavra[::-1]

if(palavra == inverso):

    print("Esta palavra e um Palindromo: ")

else:

    print("O inverso da Palavra: " + inverso)
