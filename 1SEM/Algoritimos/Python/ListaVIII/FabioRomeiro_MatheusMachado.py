arquivoEntrada =  open('txtB.txt', 'r')
resposta =  open('resultado.txt', 'w')
preposicoes = 0
verbos = 0
verbosPP = 0
ordemPesos = []
ordemAlfabetica = ''
contador = 0
for palavra in arquivoEntrada.readline().split(' '):
    indice = []
    valorFinal = 0
    soma = 0
    if len(palavra) % 2 == 0 and palavra[len(palavra)-1] not in ['f','t','s','j','c'] and 'x' not in palavra:
        preposicoes += 1
    if len(palavra) == 5 and palavra[0] not in ['f','t','s','j','c']:
        verbos += 1
    if len(palavra) == 5 and palavra[0] not in ['f','t','s','j','c'] and palavra[len(palavra)-1] in ['f','t','s','j','c']:
        verbosPP +=1
    for letra in palavra:
        indice.append('tshjmpnzwlrcbxkqvdgf'.index(letra))
    ordemPesos.append(indice)
    for i in range(len(palavra)):
        valorFinal += (20**i) * 'tshjmpnzwlrcbxkqvdgf'.index(palavra[i])
    for num in str(valorFinal):
        soma += int(num)
    if soma % 2 == 0 and len(str(valorFinal)) == len(set(str(valorFinal))):
        contador += 1
ordemPesos = sorted(ordemPesos)
for valores in ordemPesos:
    palavra = ''
    for i in range(len(valores)):
        palavra += 'tshjmpnzwlrcbxkqvdgf'[valores[i]]
    ordemAlfabetica += palavra + ' '
resposta.write("A;"+str(preposicoes)+'\nB;'+str(verbos)+'\nC;'+str(verbosPP)+'\nD;'+str(ordemAlfabetica)+'\nE;'+str(contador))
arquivoEntrada.close()
resposta.close()
