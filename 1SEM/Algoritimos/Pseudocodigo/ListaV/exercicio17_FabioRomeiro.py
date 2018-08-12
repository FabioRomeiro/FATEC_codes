# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 17 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

x = int(input("Entre com o primeiro numero da sequencia:"))
y = int(input("Entre com o segundo numero da sequencia:"))
print("Sequência: ")
for i in range(19):
    if i == 1: print(x)
    print(y)
    x,y = y,x+y
