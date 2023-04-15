# -*- coding: utf-8 -*-

entrada = int(input())
value = entrada
cem, cinquenta, vinte, dez, cinco, dois, um = 100, 50, 20, 10, 5, 2, 1
count_cem, count_cinquenta, count_vinte, count_dez, count_cinco, count_dois, count_um = 0, 0, 0, 0, 0, 0, 0

while value > 0 :
    
    if value >= cem :
        count_cem = int(value / cem)
        value = value % cem
    elif value >= cinquenta :
        count_cinquenta = int(value / cinquenta)
        value = value % cinquenta
    elif value >= vinte :
        count_vinte = int(value / vinte)
        value = value % vinte
    elif value >= dez :
        count_dez = int(value / dez)
        value = value % dez
    elif value >= cinco :
        count_cinco = int(value / cinco)
        value = value % cinco
    elif value >= dois :
        count_dois = int(value / dois)
        value = value % dois
    else :
        count_um = int(value / um)
        value = value % um

print(entrada)
print("{} nota(s) de R$ {},00".format(count_cem, cem))
print("{} nota(s) de R$ {},00".format(count_cinquenta, cinquenta))
print("{} nota(s) de R$ {},00".format(count_vinte, vinte))
print("{} nota(s) de R$ {},00".format(count_dez, dez))
print("{} nota(s) de R$ {},00".format(count_cinco, cinco))
print("{} nota(s) de R$ {},00".format(count_dois, dois))
print("{} nota(s) de R$ {},00".format(count_um, um))
