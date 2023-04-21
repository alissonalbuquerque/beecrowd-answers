# -*- coding: utf-8 -*-

# Functions
# - - - - - - - - - - - -
def cents_to_real(value):
    return value * 100.00

def real_to_cents(value):
    return value / 100.00
# - - - - - - - - - - - -

currency = float(input())
currency = cents_to_real(currency)

cem, cinquenta, vinte, dez, cinco, dois = cents_to_real(100), cents_to_real(50), cents_to_real(20), cents_to_real(10), cents_to_real(5), cents_to_real(2)
um, cent_cinquenta, cent_vinte_cinco, cent_dez, cent_cinco, cent_um = cents_to_real(1), cents_to_real(0.50), cents_to_real(0.25), cents_to_real(0.10), cents_to_real(0.05), cents_to_real(0.01)

count_cem, count_cinquenta, count_vinte, count_dez, count_cinco, count_dois = 0, 0, 0, 0, 0, 0
count_um, count_cent_cinquenta, count_cent_vinte_cinco, count_cent_dez, count_cent_cinco, count_cent_um = 0, 0, 0, 0, 0, 0

while(currency > 0):

    if(currency // cem > 0):
        count_cem = int(currency // cem)
        currency = currency % cem

    elif(currency // cinquenta > 0):
        count_cinquenta = int(currency // cinquenta)
        currency = currency % cinquenta

    elif(currency // vinte > 0):
        count_vinte = int(currency // vinte)
        currency = currency % vinte

    elif(currency // dez > 0):
        count_dez = int(currency // dez)
        currency = currency % dez

    elif(currency // cinco > 0):
        count_cinco = int(currency // cinco)
        currency = currency % cinco

    elif(currency // dois > 0):
        count_dois = int(currency // dois)
        currency = currency % dois

    elif(currency // um > 0):
        count_um = int(currency // um)
        currency = currency % um

    elif(currency // cent_cinquenta > 0):
        count_cent_cinquenta = int(currency // cent_cinquenta)
        currency = currency % cent_cinquenta

    elif(currency // cent_vinte_cinco > 0):
        count_cent_vinte_cinco = int(currency // cent_vinte_cinco)
        currency = currency % cent_vinte_cinco

    elif(currency // cent_dez > 0):
        count_cent_dez = int(currency // cent_dez)
        currency = currency % cent_dez

    elif(currency // cent_cinco > 0):
        count_cent_cinco = int(currency // cent_cinco)
        currency = currency % cent_cinco

    else:
        count_cent_um = int(currency // cent_um)
        currency = 0.00

print('NOTAS:')
print('{} nota(s) de R$ {:.2f}'.format(count_cem, real_to_cents(cem)))
print('{} nota(s) de R$ {:.2f}'.format(count_cinquenta, real_to_cents(cinquenta)))
print('{} nota(s) de R$ {:.2f}'.format(count_vinte, real_to_cents(vinte)))
print('{} nota(s) de R$ {:.2f}'.format(count_dez, real_to_cents(dez)))
print('{} nota(s) de R$ {:.2f}'.format(count_cinco, real_to_cents(cinco)))
print('{} nota(s) de R$ {:.2f}'.format(count_dois, real_to_cents(dois)))

print('MOEDAS:')
print('{} moeda(s) de R$ {:.2f}'.format(count_um, real_to_cents(um)))
print('{} moeda(s) de R$ {:.2f}'.format(count_cent_cinquenta, real_to_cents(cent_cinquenta)))
print('{} moeda(s) de R$ {:.2f}'.format(count_cent_vinte_cinco, real_to_cents(cent_vinte_cinco)))
print('{} moeda(s) de R$ {:.2f}'.format(count_cent_dez, real_to_cents(cent_dez)))
print('{} moeda(s) de R$ {:.2f}'.format(count_cent_cinco, real_to_cents(cent_cinco)))
print('{} moeda(s) de R$ {:.2f}'.format(count_cent_um, real_to_cents(cent_um)))
