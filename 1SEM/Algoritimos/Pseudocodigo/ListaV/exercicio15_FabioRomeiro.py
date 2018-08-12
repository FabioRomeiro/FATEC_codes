# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 15 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

dividendo = int(input("Digite o dividendo:"))
divisor = int(input("Digite o divisor:"))

resto = dividendo%divisor
numDivisivelPeloDivisor = dividendo - resto

quociente = 0

for i in range(0, numDivisivelPeloDivisor, divisor):
    quociente+=1

print("O quociente é %d" %quociente)
