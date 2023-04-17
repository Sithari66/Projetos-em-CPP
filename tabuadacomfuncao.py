def tabuada (n):

    for num in range(0,11):

        resultado = n * num

        print(str(n) + " x "+ str(num) + " = " + str(resultado))

n= int(input("Digite o numero: "))

tabuada(n)
