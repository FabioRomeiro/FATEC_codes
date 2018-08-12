# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 23 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

n1=int(input("Digite o primeiro numero: "))
n2=int(input("Digite o segundo numero: "))

for i in range(n1+1,n2):
    qtdVezesEMultiplicado = 0
    for x in range(1, i+1):
        if (i % x) == 0: qtdVezesEMultiplicado+=1
    if qtdVezesEMultiplicado==2: print(i)
