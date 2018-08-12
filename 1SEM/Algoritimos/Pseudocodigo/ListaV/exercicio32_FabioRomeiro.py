# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 32 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

anos=0
anacleto,cresAnac=1.5,0.02
felisberto,cresFeliz = 1.1,0.03
while anacleto>felisberto:
    anacleto+=cresAnac
    felisberto+=cresFeliz
    anos+=1
print(anos)