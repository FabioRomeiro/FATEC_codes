# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 34 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"
qtdOtimo, maiorIdadeOtimo=0,0
qtdBom = 0
qtdRegular = 0
somaIdadeRuim, qtdRuim, maiorIdadeRuim = 0, 0,0
qtdPessimo, maiorIdadePessimo = 0,0
qtdEspectadores=5
for i in range(qtdEspectadores):
    idade = int(input("Digite sua idade: "))
    voto = input("O que achou do filme? \n(A = Otimo | B = Bom | C = Regular | D = Ruim | E = Pessimo)\n").upper()
    if voto == 'A':
        qtdOtimo+=1
        if idade > maiorIdadeOtimo : maiorIdadeOtimo = idade
    if voto == 'B': qtdBom+=1
    if voto == 'C': qtdRegular+=1
    if voto == 'D':
        qtdRuim+=1
        somaIdadeRuim+=idade
        if idade>maiorIdadeRuim:maiorIdadeRuim=idade
    if voto == 'E':
        qtdPessimo+=1
        if idade>maiorIdadePessimo: maiorIdadePessimo=idade
difBomReg = abs(((qtdBom*100)/qtdEspectadores) - ((qtdRegular*100)/qtdEspectadores))
mediaIdadeRuim = somaIdadeRuim/qtdRuim

print("Quantidade de votos Ótimos: %d" %qtdOtimo)
print("Diferença porcentual entre respostas Bom e Regular: %.2f%s" %(difBomReg,'%'))
print("Media de idade das pessoas que responderam Ruim: %.2f" % (mediaIdadeRuim))
print("Porcentagem de resposta Péssimo: %.2f%s\nMaior idade que votou Péssimo: %d" %((qtdPessimo*100)/qtdEspectadores, '%',maiorIdadePessimo))
print("Diferença de idade entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d" %(maiorIdadeOtimo-maiorIdadeRuim))

