# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 25 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

h=0
denominador = 1
for numerador in range(1,99,2):
    h += numerador/denominador
    denominador += 1
print(h)
