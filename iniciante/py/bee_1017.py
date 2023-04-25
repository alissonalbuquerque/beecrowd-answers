# -*- coding: utf-8 -*-

km_l = 12
tempo = int(input())
vel_km = int(input())

dist = vel_km * tempo

litros = dist / 12

print("{:.3f}".format(litros))
