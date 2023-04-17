#Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em um dicionário. Apósisto, crie  uma  função  que calcule  a  média  anual  das  temperaturas  e  mostre  todas  as  temperaturas  acima  da médiaanual, e em que mês elas ocorreram (mostrar o mês por extenso: 1Janeiro, 2 Fevereiro.

temperatura = {1:0,2:0,3:0,4:0,5:0,6:0,7:0,8:0,9:0,10:0,11:0,12:0}
mes = {1:"Janeiro",2:"Fevereiro",3:"Marco",4:"Abril",5:"Maio",6:"Junho",7:"Julho",8:"Agosto",9:"Setembro",10:"Outubro",11:"Novembro",12:"Dezembro"}
adc=0
temptotal=0
media_anual=0

while adc<12 :
    adc += 1
    graus = int(input("Insira a temperatura do mês atual: " + str(mes[adc]) +  " no caso em graus: " ))
    temperatura[adc] =(graus)
    temptotal += graus
media_anual = temptotal / 12
print(" ")
print("Media anual " + str(media_anual))
print(" ")
for graus in temperatura:
    if int(temperatura[graus]) > media_anual:
        print("O mes " + str(mes[graus]) + " com temperatura " + str(temperatura[graus]) + " ficou acima da media anual")
