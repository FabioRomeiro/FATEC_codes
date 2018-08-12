# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Contador de Ocorrencia das Palavras - Arquivos e Dicionários - Lucas Gonçalvez Nadalete

import string
import json
txt = open('alice.txt','r')
tabelaDeValores = {}
alice = txt.read()
alice = alice.lower()
alice = alice.split()
for palavra in alice:
    if palavra not in tabelaDeValores: tabelaDeValores[palavra] = 1
    else: tabelaDeValores[palavra] += 1
txt.close()
print(tabelaDeValores)
#Exportando para JSON porque fica bonito
jsonFile = open('numeroDeOcorrencias.json','w')
jsonFile.write(json.dumps(tabelaDeValores))
        
