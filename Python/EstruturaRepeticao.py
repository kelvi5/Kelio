#Estrutura de repetição
'''
#Faça um Programa que peça dois números e imprima o maior deles.

n1 = float(input('Digite um valor: '))
n2 = float(input('Digite outro valor: '))
if( n1 > n2):
    print('O numero {} é maior que {}'.format(n1, n2))
else:
    print('O numero {} é maior que {}'.format(n2, n1))

#Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo

n1 = float(input('Digite um valor, positivo ou negativo: '))

if( n1 >= 0):
    print('Esse numero é positivo(Acima ou igual a zero)')
else:
    print('Esse numero é negativo(Menor que zero)')


#Faça um Programa que verifique se uma letra digitada é "F" ou "M".
#Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

letra = input('Digite o seu genero( F - Feminino M - Masculino)')

if( letra == 'F' or letra == 'f'):
    print('Seja bem vinda senhora')
else:
    if( letra == 'M' or letra == 'm'):
        print('Seja bem vindo senhor')
    else:
            print('Genero desconhecido')

#Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

vogal = input('Digite uma letra: ')

if( vogal == 'A' or vogal == 'a' or vogal == 'E' or vogal == 'e' or vogal == 'I' or vogal == 'i' or vogal == 'O' or vogal == 'o'
               or vogal == 'U' or vogal == 'u' ):
    print('É vogal')
else:
    print('É consoante')

'''
#Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno
#e apresentar:
#A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
#A mensagem "Reprovado", se a média for menor do que sete;
#A mensagem "Aprovado com Distinção", se a média for igual a dez.

n1 = float(input('Digite a sua primeira nota: '))
n2 = float(input('Digite a sua segunda nota: '))

media = (n1 + n2) / 2

if(media >= 7):
    print('Aprovado com a media {}!!'.format(media))
else:
    if(media < 7):
        print('Reprovado com a media {}!!'.format(media))
    else:
        if(media == 10):
            print('Aprovado com Distinção')












    
