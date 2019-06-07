#lista de letras para criptografar
alfabeto = "abcdefghijklmnopqrstuvwxyz"

#a chave secreta é  3
chave = 3
contador = 0

while(contador<70):
    letra = input("Por favor, entre com uma letra para criptografar: ")
    posicao = alfabeto.find(letra)
    novaPosicao = (posicao - chave) % 26
    letraCriptografada = alfabeto[novaPosicao]
    print("Sua letra criptografada é" , letraCriptografada)
    contador = contador +1
