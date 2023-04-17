#	Implemente uma classe em Python com ao menos 4 atributos sendo que estes atributos sejam inicializados pelo construtor.

class Pessoa:
    nome = None
    sexo = None
    idade = None
    CPF = None

    def _init_(self):
        self.nome = ""
        self.sexo = ""
        self.idade = 0
        self.CPF = 0
