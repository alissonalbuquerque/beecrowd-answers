# -*- coding: utf-8 -*-

import math

a, b, c = [float(x) for x in input().split()]

if( b**2 - 4*a*c >= 0 and a != 0 ):
    delta = math.sqrt(b**2 - 4*a*c)

    x1 = (-b + delta) / (2*a)
    x2 = (-b - delta) / (2*a)

    print("R1 = {:.5f}".format(x1))
    print("R2 = {:.5f}".format(x2))
else:
    print("Impossivel calcular")
