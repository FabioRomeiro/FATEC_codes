# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 24 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

alturas = []
sexos = []
somaAlturaMulheres=0
qtdMulheres=0
qtdHomens=0
for i in range(2):
    sexo = input("Digite o sexo(M/F): ")
    sexos.append(sexo)
    altura=float(input("Digite a altura: "))
    alturas.append(altura)
    if sexo.upper() == 'F':
        qtdMulheres += 1
        somaAlturaMulheres += altura
    elif sexo.upper() == 'M': qtdHomens += 1
porcHomens = (qtdHomens*100)/(len(sexos))
porcMulheres = (qtdMulheres*100)/(len(sexos))

print("Maior altura do grupo: %.2f\nMenor altura do grupo: %.2f" %(max(alturas),min(alturas)))
print("Média de alturas das mulheres: %.2f" %(somaAlturaMulheres/qtdMulheres))
print("Número de homens: %d\nDiferença porcentual entre homens e mulheres: %.2f%s" %(qtdHomens,abs(porcHomens-porcMulheres),'%'))
