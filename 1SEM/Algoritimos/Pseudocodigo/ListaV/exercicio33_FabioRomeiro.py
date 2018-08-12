# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 33 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

totalCriancas=int(input("Digite o numero de crianças: "))
qtdMeninasPre,qtdMeninosPre,maiorNumDias,numTotalDias = 0,0,0,0
sexo=''
for i in range(totalCriancas):
    sexo = input("Digite o sexo da criança (M/F | X = sair): ").upper()
    if sexo == 'X': break
    if sexo == 'M': qtdMeninosPre += 1
    if sexo == 'F': qtdMeninasPre += 1
    numDias=int(input("Digite o numero de dias que foi mantido na incubadora: "))
    numTotalDias+=numDias
    if numDias > maiorNumDias: maiorNumDias = numDias
print("Porcentagem de crianças prematuras: %.2f%s" %( (((qtdMeninasPre+qtdMeninosPre)*100)/totalCriancas),'%'))
print("Porcentagem de meninas prematuras: %.2f%s\nPorcentagem de meninos prematuros: %.2f%s" %(((qtdMeninasPre*100)/totalCriancas),'%',((qtdMeninosPre*100)/totalCriancas),'%'))
print("Media de dias de permanencia na incubadora: +- %d" %(round(numTotalDias/(qtdMeninosPre+qtdMeninasPre))))
print("Maior numero de dias que um recem nascido permaneceu na incubadora: %d" %maiorNumDias)
