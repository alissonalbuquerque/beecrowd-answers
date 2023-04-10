# -*- coding: utf-8 -*-

p1 = input().split()
p2 = input().split()

codP1 = p1[0]
numP1 = int(p1[1])
priceP1 = float(p1[2])

codP2 = p2[0]
numP2 = int(p2[1])
priceP2 = float(p2[2])

valueP1 = numP1 * priceP1
valueP2 = numP2 * priceP2

total = valueP1 + valueP2

print("VALOR A PAGAR: R$ {:.2f}".format(total))
