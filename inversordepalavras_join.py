palavra = input("Favor digite uma palavra: ")

inverso =  ''.join(reversed(palavra))

if(palavra == inverso):

    print("Esta palavra e um Palindromo: ")

else:

    print("O inverso da Palavra: " + inverso)
