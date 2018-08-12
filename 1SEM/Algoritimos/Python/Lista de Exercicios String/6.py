data = input("Entre com sua data de nascimento (dd/mm/aaaa):").split('/')

if data[1]=="01":
    mes = "janeiro"    
elif data[1]=="02":
    mes="fevereiro"
elif data[1]=="03":
    mes="março"
elif data[1]=="04":
    mes="abril"
elif data[1]=="05":
    mes="maio"
elif data[1]=="06":
    mes="junho"
elif data[1]=="07":
    mes="julho"
elif data[1]=="08":
    mes="agosto"
elif data[1]=="09":
    mes="setembro"
elif data[1]=="10":
    mes="outubro"
elif data[1]=="11":
    mes="novembro"
elif data[1]=="12":
    mes="dezembro"

if (data[1] == "02" and int(data[0]) > 29 or int(data[0]) > 31 or int(data[0]) < 1 or int(data[1]) < 1 or int(data[1]) > 12 or int(data[2]) < 0):
    print("Você não nasceu :)")
else:
    print("Você nasceu em %s de %s de %s" %(data[0], mes, data[2]))
