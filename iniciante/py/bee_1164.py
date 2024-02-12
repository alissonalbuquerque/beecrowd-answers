# -*- coding: utf-8 -*-

import functools

def is_perfect(x):

    divisibles = [0]

    for i in range(1, x):
        if x % i == 0:
            divisibles.append(i)

    num_perfect = functools.reduce(lambda x, y: x + y, divisibles)

    if num_perfect == x:
        return True

    return False

n = int(input())

for i in range(0, n):

    x = int(input())

    if(is_perfect(x)):
        print(f"{x} eh perfeito")
    else:
        print(f"{x} nao eh perfeito")
