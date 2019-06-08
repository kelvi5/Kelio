#Atividade 5

n1 = int(input('Digite um Numero: '))
print('Seu antecessor é: {}\n E seu Posterior é: {}'.format(n1-1, n1+1))


#Atividade 6
#crie um algoritmo que leia um numero e mostre o seu dobro, o triplo e a raiz quadrada
n1 = int(input('\n\nDigite um numero: '))
print('O Dobro: {}\nO Triplo: {}\nSua Raiz: {}'.format(n1*2, n1*3, n1 ** (1/2)))

#07 - desenvolva um programa que leia as duas notas de um aluno, calcule a media e mostre
#

n1 = float(input('\n\nDigite a primeira nota do aluno: '))
n2 = float(input('\nDigite a segunda nota do aluno: '))

media = (n1 + n2) / 2
print('\nA media do aluno é: {}'.format(media))


#08 - escreva um programa que leia o valor em metros e exiba convertido em centimetros e milimetros

n1 = float(input('\n\nDigite o valor a ser convertido: '))


print('O valor {}  Convertido em centimetros {} e milimetros {}'.format(n1, n1*100, n1*1000))


#09 - faça um programa que leia um numero inteiro qualquer e mostre na tela a sua tabuada

n1 = int(input('Digite o Numero que deseja realizar a tabuada: '))

print( '{} x {} = {}'.format(n1, 1, n1*1))
print( '{} x {} = {}'.format(n1, 2, n1*2))
print( '{} x {} = {}'.format(n1, 3, n1*3))
print( '{} x {} = {}'.format(n1, 4, n1*4))
print( '{} x {} = {}'.format(n1, 5, n1*5))
print( '{} x {} = {}'.format(n1, 6, n1*6))
print( '{} x {} = {}'.format(n1, 7, n1*7))
print( '{} x {} = {}'.format(n1, 8, n1*8))
print( '{} x {} = {}'.format(n1, 9, n1*9))
print( '{} x {} = {}'.format(n1, 10, n1*10))


#10 - crie um programa que leia quanto dinheiro uma pessoa tem na carteira e mostre quantos
#dolares ela pode comprar / considere 1 dolar é 3,27

n1 = float(input('Digite o Valor que deseja converter: '))

converter = n1 * 3.27

print('Você pode comprar {} dolares americanos'.format(converter))


#11 - faça um programa que leia a largura e a altura de uma parede em metros, calcule
#a sua area e a quantidade de tinta necessaria para pinta la sabendo que cada litro de 
#tinta pinta uma area de 2m²

n1 = float(input('Digite a altura da parede: '))
n2 = float(input('\nDigite a largura da parede: '))

area = n1 * n2

print('Você ira precisar de {} litros de tinta para pintar a parede'.format(area/2))

#12 - faça um algoritmo que leia o preço de um produto e mostre seu novo preço com 5%
#de desconto

n1 = float(input('Digite o valor do produto: '))
novoValor = (n1 * 0.05) + n1

print('O novo valor do produto com aumento de 5% é: {}'.format(novoValor))

#13 - leia um salario de um funcionario e mostre seu novo salario com 15% de aumento

n1 = float(input('Digite o salario do funcionario: '))

novoSalario = (n1 * 0.15) + n1
print('O novo salario do funcionario com aumento de 15% sera: {}'.format(novoSalario))
