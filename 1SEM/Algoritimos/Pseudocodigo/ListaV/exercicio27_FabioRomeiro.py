# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 27 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

soma=0
denominador = 500
for i in range(10):
    if i%2==0: numerador = 2
    else: numerador = -5
    soma+=numerador/denominador
    denominador-=50
print(soma)
