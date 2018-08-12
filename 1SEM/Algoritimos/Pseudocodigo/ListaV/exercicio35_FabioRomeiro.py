# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 35 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"
elevador = ''
i = 0
qtdA,AM,AV,AN=0,0,0,0
qtdB,BM,BV,BN=0,0,0,0
qtdC,CM,CV,CN=0,0,0,0
while elevador != 'X':
    elevador = input("Qual elevador que voce mais usa? (A,B ou C | X = sair): ").upper()
    if elevador == 'X': break
    periodo = input("Em qual periodo? (M = Matutino | V = Vespertino | N = Noturno)").upper()
    if elevador=='A':
        qtdA+=1
        if periodo == 'M': AM+=1
        if periodo == 'V': AV+=1
        if periodo == 'N': AN+=1
    if elevador=='B':
        qtdB+=1
        if periodo == 'M': BM+=1
        if periodo == 'V': BV+=1
        if periodo == 'N': BN+=1
    if elevador=='C':
        qtdC+=1
        if periodo == 'M': CM+=1
        if periodo == 'V': CV+=1
        if periodo == 'N': CN+=1
    i+=1
if qtdA>qtdB and qtdA>qtdC:maisFrequentado = 'A'
if qtdB>qtdA and qtdB>qtdC:maisFrequentado = 'B'
if qtdC>qtdB and qtdC>qtdA:maisFrequentado = 'C'
if (AM+BM+CM) > (AV+BV+CV) and (AM+BM+CM) > (AN+BN+CN): periodoMaisFrequentado = 'M'
if (AV+BV+CV) > (AN+BN+CN) and (AV+BV+CV) > (AN+BN+CN): periodoMaisFrequentado = 'V'
if (AN+BN+CN) > (AV+BV+CV) and (AN+BN+CN) > (AM+BM+CM): periodoMaisFrequentado = 'N'

print("Elevador mais frequentado: %s" %maisFrequentado)
print("Periodo mais frequentado: %s" %periodoMaisFrequentado)
