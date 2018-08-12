# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 28 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

h=0
numDenominador = 1
for i in range(10):
    if i%2==0: numerador = 1
    else: numerador = -1
    denominador = numDenominador**3
    h+=numerador/numDenominador
    numDenominador+=2
print(h)