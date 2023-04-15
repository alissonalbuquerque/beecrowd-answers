# -*- coding: utf-8 -*-

a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)

maiorAB = (a + b + abs(a-b)) / 2.0
maiorAB = int(maiorAB)

if maiorAB > c:
    print('{} eh o maior'.format(maiorAB))
else: 
    print('{} eh o maior'.format(c))
