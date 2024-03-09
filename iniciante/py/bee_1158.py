# -*- coding: utf-8 -*-

import functools

def sum_odd(x, y):

    if x % 2 == 0:
        x = x + 1

    odds = [x]
    for i in range(1, y):
        x = x + 2
        odds.append(x)

    return functools.reduce(lambda x, y: x + y, odds)


n = int(input())

for i in range(0, n):

    x, y = [int(i) for i in input().split()]

    print(sum_odd(x, y))
