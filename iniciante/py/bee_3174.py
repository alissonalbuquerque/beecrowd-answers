# -*- coding: utf-8 -*-

n = int(input())

hours_by_day = {'bonecos':8, 'arquitetos':4, 'musicos':6, 'desenhistas':12}
hours_by_elf = {'bonecos':0, 'arquitetos':0, 'musicos':0, 'desenhistas':0}
counter = 0

for i in range(0, n):
    e, g, h = input().split()
    h = int(h)

    hours_by_elf[g] += h

for key in list(hours_by_day.keys()):
    counter += hours_by_elf[key] // hours_by_day[key]

print(counter)
