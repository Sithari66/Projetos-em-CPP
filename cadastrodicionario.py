Nome = input("Digite seu nome: ")
Idade = input("Digite sua Idade: ")
Curso = input("Digite seu Curso: ")
Endereco = input("Digite seu Endereco: ")

banco = {}
banco["Nome"] = Nome
banco["Idade"] = Idade
banco["Curso"] = Curso
banco["Endereco"] = Endereco

print("Nome: " +banco ["Nome"]) 
print("Idade:" +banco ["Idade"]) 
print("Curso:" +banco ["Curso"]) 
print("Endereco:" +banco["Endereco"]) 

print("\n",banco.items())

