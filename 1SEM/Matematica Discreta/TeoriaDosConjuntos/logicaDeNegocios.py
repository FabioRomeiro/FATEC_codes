#Arquivo com a lógica do programa
import os, sys #Importando biblioteca limpar a tela do prompt
from itertools import combinations #Importando biblioteca para fazer as combinações das partes
import interface

#Para fazer a funcionalidade de nomear os conjuntos de A a Z, coloquei todas as letras dentro de uma lista
letras = ["A","B","C","D","E","F",
          "G","H","I","J","K","L",
          "M","N","O","P","Q","R",
          "S","T","U","V","W","X",
          "Y","Z"]

valores={}

def qtdConjuntos():
    numMax = 26
    numMin = 2
    qtd = interface.pedeQuantidadeConjuntos()
    while qtd > numMax:
        qtd = interface.erroValorAlto(numMax)
    
    while qtd < numMin:
        qtd = interface.erroValorBaixo(numMin)
    
    return qtd

def valoresConjuntos():
    qtdDeConjuntos = qtdConjuntos()
    for i in range(qtdDeConjuntos):
        valor = interface.pedeValoresConjuntos(qtdDeConjuntos-i,valores,letras[i])
        valores[letras[i]] = valor

def selecionaOperacao():
    operacao = interface.mostraOperacoes(valores)
    if operacao == 1: uniao() 
    if operacao == 2: interseccao()
    if operacao == 3: subtracao()
    if operacao == 4: partes()
    if operacao == 5: complemento()

def verificaLetraConjunto(letra):
    if letra:
        pass

def uniao():
    tipo = 1

    interface.exibeTodosConjuntos(valores)
    letraPriConjunto,letraSegConjunto = interface.pedeConjuntos(tipo)
    priConjunto = valores[letraPriConjunto] 
    segConjunto = valores[letraSegConjunto] 
    
    iguais = priConjunto
    
    for letra in segConjunto:
        if letra not in priConjunto:
            iguais.append(letra)

    interface.exibeResposta(letraPriConjunto, letraSegConjunto, iguais, tipo)

def interseccao():
    tipo = 2

    interface.exibeTodosConjuntos(valores)
    letraPriConjunto,letraSegConjunto = interface.pedeConjuntos(tipo)
    priConjunto = valores[letraPriConjunto] 
    segConjunto = valores[letraSegConjunto] 

    iguais = []

    for letra in priConjunto:
        if letra in segConjunto:
            iguais.append(letra)

    interface.exibeResposta(letraPriConjunto, letraSegConjunto, iguais, tipo)

def subtracao():
    tipo = 3

    interface.exibeTodosConjuntos(valores)
    letraPriConjunto,letraSegConjunto = interface.pedeConjuntos(tipo)
    priConjunto = valores[letraPriConjunto] 
    segConjunto = valores[letraSegConjunto] 

    subtracao = []

    for letra in priConjunto:
        if letra not in segConjunto:
            subtracao.append(letra)

    interface.exibeResposta(letraPriConjunto, letraSegConjunto, subtracao, tipo)

def partes():
    tipo = 4

    interface.exibeTodosConjuntos(valores)
    letraConjunto = interface.pedeConjuntos(tipo)
    conjunto = list(set(valores[letraConjunto]))

    combinacoes = []
    
    for tamanho in range(0, len(conjunto)+1):
        for combinacao in combinations(conjunto, tamanho):
            combinacoes.append(combinacao)

    interface.exibeResposta(letraConjunto, '', combinacoes, tipo)


def complemento():
    tipo = 5

    interface.exibeTodosConjuntos(valores)
    letraConjuntoUniverso, letraConjunto = interface.pedeConjuntos(tipo)
    conjuntoUniverso = valores[letraConjuntoUniverso]
    conjunto = valores[letraConjunto]

    complementares = []

    for letra in conjuntoUniverso:
        if (letra not in conjunto):
            complementares.append(letra)

    interface.exibeResposta(letraConjunto, '' , complementares, tipo)
