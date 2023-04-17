dicionario = {"Nome": 'Carlos', "Ultimo nome": 'Henrique', "Curso":'Ciencia da Computacao', "Idade":'24 anos' , "Endereco":'Prado'}

print(dicionario.items())
print("\n")
print(dicionario.keys())
print(dicionario.values())

dicionario2 = dicionario.copy() 

del dicionario["Curso"]

dicionario["Ultimo nome"] = "Lopes"

print("\n")
print(dicionario.items())

del dicionario["Nome"]
del dicionario["Ultimo nome"]
del dicionario["Idade"]

print("\n")
print(dicionario.items())

dicionario2["Nome"] = "Andor"
dicionario2["Idade"] = "66"

print("\n")
print(dicionario2.items())
