# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Exercício 29 - Capitulo 3 - "Lógica de Programação - A construção de algoritmos e estruturas de dados (Edição 3)"

codigo=42
maiorNumFuncG=[0,'']
maiorNumFuncM=[0,'']
while (codigo!=0):
    codigo=int(input("\nDigite o codigo da empresa: "))
    if codigo==0: break
    porte = input("Digite o porte da empresa(G-Grande | M-Microempresa): ")
    numeroDeFuncionarios = int(input("Digite o numeros de funcionarios da empresa: "))
    
    if porte.upper() == 'G' and numeroDeFuncionarios>maiorNumFuncG[0]: 
        maiorNumFuncG[0] = numeroDeFuncionarios
        maiorNumFuncG[1] = codigo
    if porte.upper() == 'M' and numeroDeFuncionarios>maiorNumFuncM[0]: 
        maiorNumFuncM[0] = numeroDeFuncionarios
        maiorNumFuncM[1] = codigo
print("\nEmpresa com maior numero de funcionarios em uma Grande empresa: %s" %maiorNumFuncG[1])
print("Empresa com maior numero de funcionarios em uma Microempresa: %s" %maiorNumFuncM[1])
