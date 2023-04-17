leitura = input ("Digite sua senha: ")

senha = "54321"

while (leitura != senha):
     leitura = input("Digite a senha: ")
     if leitura == senha :
        print('Acesso liberado ')
     else:
        print('Senha incorreta. Tente novamente')
