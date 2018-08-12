prestacao = float(input("Digite o valor da prestação: "))
acrescimo = prestacao * 0.10
valorComAcrescimo = prestacao + acrescimo
valorTotal = valorComAcrescimo * 0.9
prejuizo = prestacao - valorTotal
print("Valor final: R$%.2f\nPrejuizo: R$%.2f" %(valorTotal,prejuizo))