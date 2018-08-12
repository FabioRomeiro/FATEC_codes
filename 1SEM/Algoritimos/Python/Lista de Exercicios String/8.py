numero = input("Digite um numero de 1 até 99: ")
def numeroUnico(numero):
    if numero == '1': return("Um")
    elif numero == '2': return("Dois")
    elif numero == '3': return("Três")
    elif numero == '4': return("Quatro")
    elif numero == '5': return("Cinco")
    elif numero == '6': return("Seis")
    elif numero == '7': return("Sete")
    elif numero == '8': return("Oito")
    elif numero == '9': return("Nove")
    
if len(numero) == 1:
    print("Zero") if numero == '0' else print(numeroUnico(numero))        
elif len(numero)>1:
    if int(numero)>=10 and int(numero)<20:
        if numero == '10': print("Dez")
        elif numero == '11': print("Onze")
        elif numero == '12': print("Doze")
        elif numero == '13': print("Treze")
        elif numero == '14': print("Quatorze")
        elif numero == '15': print("Quinze")
        elif numero == '16': print("Dezesseis")
        elif numero == '17': print("Dezessete")
        elif numero == '18': print("Dezoito")
        elif numero == '19': print("Dezenove")
    if int(numero)>=20 and int(numero)<100:
        if numero[0]=='2': dezena="Vinte"
        if numero[0]=='3': dezena="Trinta"
        if numero[0]=='4': dezena="Quarenta"
        if numero[0]=='5': dezena="Cinquenta"
        if numero[0]=='6': dezena="Sessenta"
        if numero[0]=='7': dezena="Setenta"
        if numero[0]=='8': dezena="Oitenta"
        if numero[0]=='9': dezena="Noventa"
        print(dezena) if numero == (str(numero[0])+'0') else print("%s e %s" %(dezena,numeroUnico(numero[1])))
        