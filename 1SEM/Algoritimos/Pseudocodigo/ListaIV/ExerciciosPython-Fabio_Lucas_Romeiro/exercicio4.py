capacidade = float(input("Digite a capacidade do tanque: "))
abastecido = float(input("Digite a quantidade abastecida: "))
quilometragem = float(input("Digite a quilometragem percorrida desde o ultimo abastecimento: "))
consumo = (quilometragem / abastecido)
autonomiaAntes = (capacidade - abastecido) / consumo

print("Consumo do carro: %.2f Km/L\nAutonomia do carro antes do abastecimento: % .2f quilometros" %(consumo,autonomiaAntes))
