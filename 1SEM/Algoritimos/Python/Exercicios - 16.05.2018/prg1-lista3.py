#!/bin/env python3
# coding: utf-8
# Lucas G. Nadalete <lucas.nadalete@fatec.sp.gov.br>
# Lista de exercícios sobre funções

def crescimento_populacional(populacao1,populacao2,crescimento1,
crescimento2):
    anos = 0
    if populacao1 > populacao2 or crescimento1 > crescimento2:
        while populacao1<=populacao2:
            populacao1 += (populacao1 * (crescimento1/100))
            populacao2 += (populacao2 * (crescimento2/100))
            anos += 1
    else:
        anos = 0
    return anos

def quantidade_de_impares(valor_inicial,valor_final):
    impares = 0
    for i in range(valor_inicial,valor_final):
        if i % 2 == 0:
            impares += 1
    return impares

def soma_dos_inteiros(valor1,valor2):
    soma = 0
    if valor1 > valor2:
        maiorNumero = valor1
        menorNumero = valor2
    else:
        maiorNumero = valor2
        menorNumero = valor1

    for i in range(menorNumero+1,maiorNumero):
        soma += i
    return soma

def potencia(base,expoente):
    pot = base
    for i in range(1,expoente):
        pot *= base 
    return pot

def fibonacci(n):
    a,b=1,0
    for i in range(n):
        a,b=b,a+b
    final_Fibonacci = b
    return final_Fibonacci

def fatorial(numero):
    valor_fatorial = numero
    for i in range(numero-1,1,-1):
        valor_fatorial *= i     
    return valor_fatorial

def primo(valor):
    contador = 0
    for i in range(1,valor+1):
        if (valor % i == 0):
            contador += 1
    return True if contador == 2 else False

def quantidade_de_primos(comeco,final):
    qt_primos=0
    for i in range(comeco+1,final):
        if primo(i): 
            qt_primos += 1
    return qt_primos

def media_saltos(salto1,salto2,salto3,salto4,salto5):
    medias = [salto1,salto2,salto3,salto4,salto5]
    
    soma = 0
    print(medias)
    for i in range(1,4):
        soma += medias[i]
    
    mediaA= soma/4
    ''' Calcule a media dos saltos de um atleta, sabendo que o melhor
    e o pior saltos são desconsiderados. '''
    return mediaA

def serie1(fim):
    '''Dado n, calcule o valor de
    s = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n '''
#    return round(s,2)
    
def serie2(fim):
    '''Dado n, calcule o valor de
    s = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m'''
 #   return round(s,2)

def serie_pi(numero_vezes):
    ''' Calcule o valor de pi através da série
    4/1 - 4/3 + 4/5 - 4/7 + ... - 4/n, sendo n informado '''
#    return round(pia,6)

# Área de testes: só mexa aqui se souber o que está fazendo!
acertos = 0
total = 0 

def test(obtido, esperado):
    global acertos, total
    total += 1
    if obtido != esperado:
        prefixo = ' Falhou.'
    else:
        prefixo = ' Passou.'
        acertos += 1
    print ('%s Esperado: %s \tObtido: %s' % (prefixo,repr(esperado), 
        repr(obtido)))

def main():
    print('Aumento da população:')
    test(crescimento_populacional(80000,200000,3,1.5), 63)
    test(crescimento_populacional(1000,2000,1,1.1), 0)
    test(crescimento_populacional(2000,1000,1.1,1), 0)
    test(crescimento_populacional(2000,2020,1.1,1), 11)

    print('Quantidade de ímpares:')
    test(quantidade_de_impares(1,50), 24)
    test(quantidade_de_impares(1,10), 4)
    test(quantidade_de_impares(1,60), 29)
    test(quantidade_de_impares(40,80), 20)

    print('Soma de números inteiros:')
    test(soma_dos_inteiros(1,5), 9)
    test(soma_dos_inteiros(1,50), 1224)
    test(soma_dos_inteiros(50,1), 1224)
    test(soma_dos_inteiros(10,1), 44)
    test(soma_dos_inteiros(-10,1), -45)
    test(soma_dos_inteiros(10,-10), 0)

    print('Potência:')
    test(potencia(1,20000), 1)
    test(potencia(2,4), 16)
    test(potencia(10000,1), 10000)
    test(potencia(2,10), 1024)

    print('Fibonnaci:')
    test(fibonacci(1), 1)
    test(fibonacci(2), 1)
    test(fibonacci(3), 2)
    test(fibonacci(4), 3)
    test(fibonacci(5), 5)

    print('Fatorial:')
    test(fatorial(0), 0)
    test(fatorial(1), 1)    
    test(fatorial(5), 120)
    test(fatorial(10), 3628800)

    print('Primo:')
    test(primo(0), False)
    test(primo(1), False)
    test(primo(2), True)
    test(primo(3), True)
    test(primo(4), False)
    test(primo(5), True)
    test(primo(7), True)
    test(primo(11), True)
    
    print('Quantidade de primos no intervalo:')
    test(quantidade_de_primos(5,10), 1)
    test(quantidade_de_primos(10,20), 4)
    test(quantidade_de_primos(0,21), 8)
    test(quantidade_de_primos(43,102), 12)

    print('Média dos saltos:')
    test(media_saltos(10,10,10,10,10), 10)
    test(media_saltos(9,9.1,8,7,6.9), 8)
    test(media_saltos(1,1,3,5,5), 3)
    test(media_saltos(10,10,9.9,10,10), 10)

    print('Série 1:')
    test(serie1(1), 1.00)
    test(serie1(15), 3.32)
    test(serie1(10), 2.93)
    test(serie1(5), 2.28)

    print('Série 2:')
    test(serie2(1), 1.00)
    test(serie2(2), 1.67)
    test(serie2(3), 2.27)
    test(serie2(4), 2.84)

    print('Série pi:')
    test(serie_pi(1), 4.000000)
    test(serie_pi(2), 2.666667)
    test(serie_pi(3), 3.466667)
    test(serie_pi(4), 2.895238)
    test(serie_pi(5), 3.339683)
    test(serie_pi(6), 2.976046)
    test(serie_pi(7), 3.283738)
    test(serie_pi(8), 3.017072)
    test(serie_pi(9), 3.252366)
    test(serie_pi(10), 3.041840)
    test(serie_pi(100), 3.131593)
    test(serie_pi(150), 3.134926)
    test(serie_pi(1000), 3.140593)
    test(serie_pi(5000), 3.141393)
    test(serie_pi(9000), 3.141482)

if __name__ == '__main__':
    main()
    print("\n%d Testes, %d Ok, %d Falhas: Nota %.1f" %(total, acertos,
     total-acertos, float(acertos*10)/total))
    if total == acertos:
        print("Parabéns, seu programa rodou sem falhas!")
