#Faça um algoritmo  que  gere  um  numero aleatório entre 0  e  100 onde  o usuário terá  que  adivinhar o  numero sorteado com no máximo 3 tentativas.

from random import randint
computador = randint (0,100)
print('-=-' * 20)
print("Qual número sorteado ?(!!Você tem 3 tentativas!!) ")
print('-=-'*20)


jogador = int(input("Digite seu Palpite : "))
jogador = int(input("Digite seu Palpite : "))
jogador = int(input("Digite seu Palpite : "))

if jogador == computador:
    print("\nParabéns ! Você advinhou ")
else:
    print ("\nGanhei!!! Eu pensei no número {} e não no {}!".format(computador, jogador))
