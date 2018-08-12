string1 = input("Digite uma palavra/frase:")
string2 = input("Digite outra palavra/frase:")
print("Tamanho de '%s': %d caracteres" %(string1,len(string1)))
print("Tamanho de '%s': %d caracteres" % (string2, len(string2)))

if len(string1) == len(string2):
    print("As duas strings tem o mesmo tamanho.")
else:
    print("As duas strings são de tamanhos diferentes.")

if string1 == string2:
    print("As duas strings possuem conteúdo igual.")
else:
    print("As duas strings possuem conteúdo diferente.")

