# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 31 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

idade, maiorIdade, totalParticipantes, qtdEspecifica = 0,0,0,0

while idade != -1:
    idade = int(input("Digite sua idade: "))
    if idade == -1:break
    sexo = input("Digite seu sexo (M/F): ").upper()
    corOlhos = input("Digite a cor dos seus olhos (A - Azuis | V - Verdes | C - Castanhos): ").upper()
    corCabelo = input("Digite a cor do seu cabelo (L - Loiro | C - Castanho | P - Preto): ").upper()
    if idade > maiorIdade : maiorIdade = idade
    if (sexo == 'M' and idade >18 and idade<35 and corOlhos=='V' and corCabelo=='L'): qtdEspecifica += 1
    totalParticipantes += 1

print("A maior idade entre os habitantes é de: %d" %maiorIdade)
print("A porcentagem entre os indivíduos do sexo masculino, cujo idade esta entre 18 e 35 anos, inclusive, e que tenham olhos verdes e cabelos loiros é de: %.2f%s" %(((qtdEspecifica*100)/totalParticipantes),'%'))
