# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 19 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

print(" Fahrenheit (F°)   |   Centigrados (C°)")
print("  -----------------|------------------ ")
for f in range(50,150):
    c = (5/9)*(f-32)
    print("     %.2f         |       %.2f      " %(f,c))
