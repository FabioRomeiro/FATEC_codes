# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 13 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"


n1 = int(input("Digite o primeiro numero: "))
n2 = int(input("Digite o segundo numero: "))

if n1 > n2:maior = n1
else: maior = n2

while(True):
    if((maior % n1 == 0) and (maior % n2 == 0)):
        mmc = maior
        break
    maior += 1

print("MMC = %d" %mmc)