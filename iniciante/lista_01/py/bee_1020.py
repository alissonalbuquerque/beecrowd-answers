# -*- coding: utf-8 -*-

dias = int(input())

dia, mes, ano = 1, 30, 365
count_dia, count_mes, count_ano = 0, 0, 0

while dias > 0:
    if(dias >= ano):
        count_ano = int(dias / ano)
        dias = dias % ano
    elif(dias >= mes):
        count_mes = int(dias / mes)
        dias = dias % mes
    else :
        count_dia = int(dias / dia)
        dias = dias % dia

print("{} ano(s)".format(count_ano))
print("{} mes(es)".format(count_mes))
print("{} dia(s)".format(count_dia))
