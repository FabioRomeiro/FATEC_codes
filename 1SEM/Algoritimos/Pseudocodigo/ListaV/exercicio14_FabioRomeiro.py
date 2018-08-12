# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 14 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

n1 = int(input("Digite o primeiro numero: "))
n2 = int(input("Digite o segundo numero: "))

while n2 > 0:
    n1, n2 = n2, n1 % n2
print("MDC = %d" %n1)
