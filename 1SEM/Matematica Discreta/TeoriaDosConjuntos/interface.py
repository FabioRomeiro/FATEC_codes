import os, sys #Importando biblioteca limpar a tela do prompt
from itertools import combinations #Importando biblioteca para fazer as combinações das partes

def pulaLinha(num):
    for i in range(num):
        print()

def pressioneEnter():
    print("Pressione ENTER para continuar...")
    input()

def bemVindo():
    os.system("clear")
    print("+-------------------------------------------+")
    print("+                                           +")
    print("+ Teoria de Conjuntos - Fábio Lucas 1BD2018 +")
    print("+                                           +")
    print("+-------------------------------------------+")
    pulaLinha(1)
    pressioneEnter()

def pedeQuantidadeConjuntos():
    os.system("clear")
    qtd = int(input("Digite a quantidade de conjuntos desejada (Minimo:2 ; Maximo: 26)\n"))

    return qtd

def erroValorAlto(numMax):
    pulaLinha(1)
    qtd= int(input("Por favor digite um número menor ou igual a %d:\n" %(numMax)))
    return qtd

def erroValorBaixo(numMin):
    pulaLinha(1)
    qtd= int(input("Por favor digite um número maior ou igual a %d:\n" %(numMin)))
    return qtd

def pedeValoresConjuntos(num,valoresDosConjuntos,letra):
    os.system("clear")
    print("-----------------------------------------------")
    print("Quantidade de conjuntos a serem digitados: %d" %(num))
    print("-----------------------------------------------")
    exibeTodosConjuntos(valoresDosConjuntos)
    valor = input("Digite o valor do conjunto %s (Separado por ';'):" %letra).split(";")
    return valor

def exibeTodosConjuntos(valoresDosConjuntos):
    pulaLinha(1)
    print("------------ LISTA DE CONJUNTOS ------------")
    for letra,valor in valoresDosConjuntos.items():
        print("%s = {%s}" % (letra, str(valor).strip("[]")))
    print("--------------------------------------------")
    pulaLinha(1)

def mostraOperacoes(valores):
    os.system("clear")
    exibeTodosConjuntos(valores)
    operacao = int(input("Digite o valor  da operacao a ser executada: \n -Uniao = 1 \n -Interseccao = 2 \n -Subtracao = 3 \n -Partes = 4\n -Complemento = 5 \n"))
    return operacao

def pedeConjuntos(tipo):
    if (tipo == 1 or tipo == 2 or tipo == 3):
        print("Digite os conjuntos que serão utilizados na operação:")
        priConjunto = input("Primeiro conjunto: \n")
        segConjunto = input("Segundo conjunto: \n")
        
        return priConjunto.upper(), segConjunto.upper()

    elif tipo == 4:
        print("Digite o conjunto que será utilizado na operação:")
        conjunto = input("Conjunto: \n")
        
        return conjunto.upper()

    elif tipo == 5:
        print("Digite os conjuntos que serão utilizados na operação:")
        uniConjunto = input("Conjunto Universo: \n")
        compConjunto = input("Conjunto a ser complementado: \n")

        return uniConjunto.upper(), compConjunto.upper()


def exibeResposta(letra1, letra2, resp, tipo):
    os.system("clear")
    if (tipo == 1 or tipo == 2 or tipo == 3):
        if tipo == 1:
            simbolo = 'U'
        elif tipo == 2:
            simbolo = '∩'
        elif tipo == 3:
            simbolo = '-'
        
        print("-------------------------------------------")
        pulaLinha(1)
        print("%s %s %s = %s" %(letra1, simbolo, letra2, str(sorted(resp)).replace('[','{').replace(']','}')))
        pulaLinha(1)
        print("-------------------------------------------")
    
    elif tipo == 4:
        print("-------------------------------------------")
        pulaLinha(1)
        print("P(%s) = %s" %(letra1, str(sorted(resp)).replace('[','{').replace(']','}').replace('(','{').replace(')','}').replace(',',';')))
        pulaLinha(1)
        print("-------------------------------------------")

    elif tipo == 5:
        print("-------------------------------------------")
        pulaLinha(1)
        print("C(%s) = %s" %(letra1, str(sorted(resp)).replace('[','{').replace(']','}').replace('(','{').replace(')','}').replace(',',';')))
        pulaLinha(1)
        print("-------------------------------------------")
