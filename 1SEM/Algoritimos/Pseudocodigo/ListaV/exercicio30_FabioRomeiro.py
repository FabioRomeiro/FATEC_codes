# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 30 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"
salarioMinimo = 954
for i in range(10):
    cpf = input("\nDigite teu CPF: ")
    numDependentes= int(input("Digite o numero de dependentes: "))
    rendaMensal= float(input("Digite sua renda mensal: "))

    numSalariosMinimos = rendaMensal/salarioMinimo
    if numSalariosMinimos>7: imposto = rendaMensal*(20/100)
    if numSalariosMinimos<=7: imposto = rendaMensal*(15/100)
    if numSalariosMinimos<=5: imposto = rendaMensal*(10/100)
    if numSalariosMinimos<=3 : imposto = rendaMensal*(5/100)
    if numSalariosMinimos<=2 : imposto = 0
    print("\nSenhor(a) portador(a) do CPF: %s" %cpf)
    if imposto > 0 : 
        imposto -= numDependentes*(5/100)
        print("O valor do seu imposto de renda é de R$%.2f" %imposto)
    else: print("Seu imposto de renda está isento")

