frase = input("Digite uma frase:").lower()
numEspacosEmBranco = 0
numVogais=0
numA = 0
numE = 0
numI= 0
numO = 0
numU = 0
for i in frase:
    if i == ' ': numEspacosEmBranco += 1
    if i in ['a','e','i','o','u']:
        numVogais += 1
        if i == 'a': numA += 1
        if i == 'e': numE += 1
        if i == 'i': numI += 1
        if i == 'o': numO += 1
        if i == 'u': numU += 1

print("Numero de espaços em branco: %d\nNumero de vogais: %d\nA = %d\nE=%d\nI=%d\nO=%d\nU=%d" %(numEspacosEmBranco, numVogais,numA,numE,numI,numO,numU))