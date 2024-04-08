# -*- coding: utf-8 -*-

e, f, c = [int(x) for x in input().split()]

value = c
garrafas = e + f

counter = 0
while garrafas >= value:
    garrafas = garrafas - value
    garrafas = garrafas + 1

    counter = counter + 1

print(counter)
