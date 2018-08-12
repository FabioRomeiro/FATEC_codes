# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 21 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"
voto = 8
totalVotos, qtd1,qtd2,qtd3,qtd4,qtdNulo,qtdBranco = 0,0,0,0,0,0,0
votos = []
while(voto!=0):
    voto = int(input("Por favor escolha o cantidato(1,2,3,4 | 5=nulo | 6=branco): "))
    if(voto != 0): 
            totalVotos+=1
            votos.append(voto)
	
porc1 = (votos.count(1)*100)/totalVotos
porc2 = (votos.count(2)*100)/totalVotos
porc3 = (votos.count(3)*100)/totalVotos
porc4 = (votos.count(4)*100)/totalVotos
porcNulo = (votos.count(5)*100)/totalVotos
porcBranco = (votos.count(6)*100)/totalVotos
 
print("Total de votos candidato 1: %d\nPorcentagem candidato 1: %.2f%s" %(votos.count(1),porc1,'%'))
print("Total de votos candidato 2: %d\nPorcentagem candidato 2: %.2f%s" %(votos.count(2),porc2,'%'))
print("Total de votos candidato 3: %d\nPorcentagem candidato 3: %.2f%s" %(votos.count(3),porc3,'%'))
print("Total de votos candidato 4: %d\nPorcentagem candidato 4: %.2f%s" %(votos.count(4),porc4,'%'))
print("Total de votos nulos: %d\nPorcentagem de votos nulos: %.2f%s" %(votos.count(5),porcNulo,'%'))
print("Total de votos brancos: %d\nPorcentagem de votos brancos: %.2f%s" %(votos.count(6),porcBranco,'%'))
