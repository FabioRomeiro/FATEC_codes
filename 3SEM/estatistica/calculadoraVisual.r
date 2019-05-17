boasVindas <- function() {
	print('Bem vindo(a) à calculadora visual R')
	print('Autor: Fábio Lucas')
	print('Disciplina: Estatística')
}

init <- function() {
	boasVindas()
	print('Digite uma sequência de números separados por ESPAÇO, e então aperte ENTER')
	calc.numeros <- readline("digita algo")
	print(calc.numeros)
}

init()
