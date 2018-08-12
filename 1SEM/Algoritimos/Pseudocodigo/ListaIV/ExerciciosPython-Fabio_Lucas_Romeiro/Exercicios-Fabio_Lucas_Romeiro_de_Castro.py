# --- Exercicio-1
somaPeso = 0
soma = 0
for i in range(1,6):
    nota = int(input("Digite um numero:"))
    somaPeso += + i
    soma += (nota * i)
print(soma/somaPeso)

# --- Exercicio-2
print((int(input("Digite o raio do circulo:"))**2)*3.14)

# --- Exercicio-3
print(input("Entre com um numero de 3 digitos: ")[::-1])

# --- Exercicio-4
capacidade = float(input("Digite a capacidade do tanque: "))
abastecido = float(input("Digite a quantidade abastecida: "))
quilometragem = float(input("Digite a quilometragem percorrida desde o ultimo abastecimento: "))
consumo = (quilometragem / abastecido)
autonomiaAntes = (capacidade - abastecido) / consumo

print("Consumo do carro: %.2f Km/L\nAutonomia do carro antes do abastecimento: % .2f quilometros" %(consumo,autonomiaAntes))

# --- Exercicio-5
dia= int(input("Digite o dia em que voce nasceu: "))
mes= int(input("Digite o mes em que voce nasceu: "))
ano= int(input("Digite o ano em que voce nasceu: "))
diaA= int(input("Digite o dia atual: "))
mesA= int(input("Digite o mes atual: "))
anoA= int(input("Digite o ano atual: "))
print("Você ja viveu %d dias, %d meses e %d anos" %(int(diaA-dia),int(mesA-mes), int(anoA-ano)))

# --- Exericio-6
prestacao = float(input("Digite o valor da prestação: "))
acrescimo = prestacao * 0.10
valorComAcrescimo = prestacao + acrescimo
valorTotal = valorComAcrescimo * 0.9
prejuizo = prestacao - valorTotal
print("Valor final: R$%.2f\nPrejuizo: R$%.2f" %(valorTotal,prejuizo))
