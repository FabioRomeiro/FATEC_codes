# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 16 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

base = int(input("Qual sera sua base? : "))
expoente = int(input("Qual sera seu expoente? : "))

resp = 1

for i in range(expoente):
    resp *= base

print("O resultado é de %d" %resp)