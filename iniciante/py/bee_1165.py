# -*- coding: utf-8 -*-

import math

def is_prime(x):

    if(x <= 1):
        return False

    for i in range(2, int((math.sqrt(x) + 1))):
        if x % i == 0:
            return False
        
    return True

n = int(input())

for i in range(0, n):

    x = int(input())

    if(is_prime(x)):
        print(f"{x} eh primo")
    else:
        print(f"{x} nao eh primo")