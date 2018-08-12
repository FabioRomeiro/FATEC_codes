# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 26 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

s = 0

for i in range(1,10):
    if i%2==0:
        numerador =  i * (-1)
    else:
        numerador = i
    denominador = numerador**2
    s += (numerador/denominador)
print(s)