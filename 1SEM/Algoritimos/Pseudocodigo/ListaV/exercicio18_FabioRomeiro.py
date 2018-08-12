# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 18 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

numeros = []
num = 0
while True:
    num = int(input("Digite um numero inteiro positivo (-1 para parar): "))
    if num == -1: break
    numeros.append(num)
numeros = sorted(numeros)
print("\nMaior numero da lista: %d\nMenor numero da lista: %d" %(numeros[len(numeros)-1],numeros[0]))