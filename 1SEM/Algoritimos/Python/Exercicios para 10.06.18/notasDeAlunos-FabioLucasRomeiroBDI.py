# coding: utf-8
# Fábio Lucas Romeiro de Castro <fabio.lucas.romeiro@gmail.com>
# Notas de Alunos - Notas de Alunos - Profº Lucas Nadalete

def breakLines(num=1): #Só para facilitar na estetica e não precisar repetir \n
    print("\n"*(num-1))
    
def jsonfy(caminhoArquivo): #Função responsavel por abrir o arquivo, ler, e transformar em dicionario
    txtfile = open(caminhoArquivo, 'r')
    linhas = txtfile.readlines()
    arrayDeObjetos = []
    objeto = {}
    for linha in linhas:
        if linha.strip() == '#':
            arrayDeObjetos.append(objeto)
            objeto = {}
        else:
            linha = linha.strip().split(':')
            objeto[linha[0]] = linha[1]
    for item in arrayDeObjetos:
        for key,value in item.items():
            item[key] = value.split(',')
            if len(item[key]) == 1: item[key] = ''.join(item[key])
            else:
                for i in range(len(item[key])):
                    item[key][i] = float(item[key][i])
    txtfile.close()
    return arrayDeObjetos

#Função para retornar os dados dos alunos mais facilmente 
#(Voce pode escolher em retornar em variaveis ou em uma lista, e as notas pode 
# retornar como string ou como float, so digitar os atributos programados [str,float,variaveis,list,obj] 
# no ultimo parametro da funcao e separado por espaço)
def dadosDeUmAluno(listaDeObjetos, indice, opcionais='float variaveis'): 
    opcionais = opcionais.split(' ')
    objeto = listaDeObjetos[indice]
    for key,value in objeto.items():
        if key[0].lower() == 'n': nome = value
        elif key[0].lower() =='d': dever = value
        elif key[0].lower() =='t': quiz = value
        elif key[0].lower() =='q': testes = value
    if 'str' in opcionais:
        deverSTR, quizSTR, testesSTR = '| ', '| ', '| '
        for i in range(len(dever)):
            deverSTR+= str(dever[i]) + ' | '
        for i in range(len(quiz)):
            quizSTR+= str(quiz[i]) + ' | '
        for i in range(len(testes)):
            testesSTR += str(testes[i]) + ' | '
        dever, quiz, testes = deverSTR, quizSTR, testesSTR
    if 'obj' in opcionais:
        return objeto
    else:
        if 'list' in opcionais: return [nome, dever, quiz, testes]
        else: return nome, dever, quiz, testes

def detail(array): #Lista os detalhes de todos os alunos, como descrito no enunciado
    breakLines(2)
    print('** Detalhes de cada aluno **')
    breakLines(2)
    mediaClasse = []
    for i in range(len(array)):
        nome, dever, quiz, testes = dadosDeUmAluno(array, i, 'str')
        mediaFinal = getAverage(dadosDeUmAluno(array, i, 'obj'))
        print("%s: \n Notas:\n  Deveres de casa: %s\n  Quizzes: %s\n  Testes: %s" %(nome,dever,quiz,testes))
        breakLines()
        print("  Nota final: %.2f  |  %s" %(mediaFinal,getLetterGrade(mediaFinal)))
        breakLines(2)
        mediaClasse.append(mediaFinal)
    breakLines()
    print("** Media final da Classe **")
    breakLines()
    print("    Media: %.2f" % mediaDeValores(mediaClasse))

def mediaDeValores(arrayNumeros): #Faz uma media simples de um array de valores fornecidos
    soma = 0
    for num in arrayNumeros:
        soma += num
    return soma/len(arrayNumeros)

def getAverage(objeto): # Calcula a media final ponderada do aluno fornecido
    somaDever, somaQuiz, somaTestes = 0,0,0
    for key, value in objeto.items():
        if key[0]=='d': 
            for nota in value:
                somaDever += nota
            mediaDever = somaDever / len(value)
        if key[0]=='q': 
            for nota in value:
                somaQuiz += nota
            mediaQuiz = somaQuiz / len(value)
        if key[0]=='t': 
            for nota in value:
                somaTestes += nota
            mediaTestes = somaTestes / len(value)
    mediaFinal = ((mediaDever*1) + (mediaQuiz*3) + (mediaTestes*6))/10
    return mediaFinal

def getLetterGrade(pontuacao): # Retorna o conceito com base na nota fornecida
    if pontuacao>90: return 'A'
    elif pontuacao>80: return 'B'
    elif pontuacao>70: return 'C'
    elif pontuacao>60: return 'D'
    else: return 'F'

def getClassAverage(listaEstudantes): # Executa details para exibir as informaçoes sobre o aluno
    detail(listaEstudantes)

def main(): # Responsavel por executar a aplicação
    estudantes = jsonfy('dados.txt')
    getClassAverage(estudantes)

if __name__ == '__main__':
  main()
