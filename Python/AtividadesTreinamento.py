#Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
raio = float(input('Digite o raio do circulo: '))
areaCirc = raio**2
print('A area do circulo é {}'.format(areaCirc))

#Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

lado = float(input('Digite um lado do quadrado: '))
lado2 = float(input('Digite o outro lado do quadrado: '))

areaQua = lado * lado2

print('A area do quadrado é {}'.format(areaQua))

#Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
#Calcule e mostre o total do seu salário no referido mês.

ganhoHora = float(input('Digite quanto você ganha por hora: '))
trabalhoHora = float(input('Digite o numero de horas trabalhas no mês: '))

ganho = ganhoHora * trabalhoHora

print('Você ganhou R${} por {} horas trabalhadas'.format(ganho, trabalhoHora))

#Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
#C = (5 * (F-32) / 9).

tempFare = float(input('Digite a temperatura em Fahrenheit que deseja converter para Celsius: '))
tempCel = ( 5 * (tempFare-32) / 9)

print('A temperatura {}°F convertida em Celsius é igual a {}°C'.format(tempFare, tempCel))


#Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.

celsius = float(input('Digite a temperatura em Celsius que deseja converter para Fahrenheit: '))
fare = (celsius * (9/5)) + 32

print('A temperatura {}°C convertida em Farenheit é igual a {}°F'.format(celsius, fare))

#Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
#o produto do dobro do primeiro com metade do segundo .
#a soma do triplo do primeiro com o terceiro.
#o terceiro elevado ao cubo.

numInt = int(input('Digite o primeiro valor inteiro: '))
numInt2 = int(input('Digite o segundo valor inteiro: '))
numReal = float(input('Digite um valor Real: '))

a1 = (numInt * 2) + (numInt2 / 2)
a2 = (numInt * 3) + numReal
a3 = numReal**3

print('O dobro do primeiro com metade do segundo: {}\nA soma do triplo do primeiro com o terceiro: {}\nO terceiro elevado ao cubo: {}'.format(a1, a2, a3))


#Tendo como dados de entrada a altura de uma pessoa,
#construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

altura = float(input('Digite a sua altura: '))
pesoIdeal = (72.7 * altura) - 58

print('O seu peso ideal é: {}'.format(pesoIdeal))


#Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal,
#utilizando as seguintes fórmulas:
#Para homens: (72.7*h) - 58
#Para mulheres: (62.1*h) - 44.7

sexo = input('Você é (H) Homem ou (M) Mulher?: ')
if(sexo == 'H' or sexo == 'h'):
    altHomem = float(input('Digite sua altura senhor: '))
    peso = (72.7*altHomem) - 58
else:
        if(sexo == 'M' or sexo == 'm'):
            altMulher = float(input('Digite sua altura moça: '))
            peso = (62.1*altMulher) - 44.7

print('O seu peso ideal é: {}'.format(peso))

'''
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido.
calcule os descontos e o salário líquido
'''

salarioHora = float(input('Quanto você ganha por hora: '))
horaMes = float(input('Quantas horas você trabalhou no mês: '))
salarioBruto = salarioHora * horaMes
inssPago = salarioBruto * 0.08
sindiPago = salarioBruto * 0.05
impostRenda = salarioBruto * 0.11
restoSalario = salarioBruto - ( inssPago + sindiPago + impostRenda)

print('+ Salario Bruto: R${}'.format(salarioBruto))
print('- IR (11%): R${}'.format(impostRenda))
print('- INSS (8%): R${}'.format(inssPago))
print('- Sindicato (5%): R${}'.format(sindiPago))
print('= Salario Liquido: R${}'.format(restoSalario))
