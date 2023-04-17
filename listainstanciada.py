#Crie um programa em Python que armazene una classe em uma lista com no mínimo 3 Instâncias populadas e imprima os objetos preenchidos.

class cadastro:
    nome = None
    sexo = None
    idade = None
    CPF = None

    def _init_(self):
        self.nome = ""
        self.sexo = ""
        self.idade = 0
        self.CPF = 0

listaCadastro = []

for x in range (1):
        c = cadastro()
        c.nome = input("Digite o seu nome: ")
        c.sexo = input("Digite o seu sexo: ")
        c.idade = int(input("Digite a sua idade: "))
        c.CPF = int(input("Digite o seu CPF: "))
        listaCadastro.append (c)

for y in listaCadastro:
        print("\n\tCadastro: ")
        print(c.nome)
        print(c.sexo)
        print(c.idade)
        print(c.CPF)
