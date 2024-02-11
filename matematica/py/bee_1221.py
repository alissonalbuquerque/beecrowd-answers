# -*- coding: utf-8 -*-

def is_prime(number):

    if(number <= 1):
        return False
    
    for i in range(2, int(number**0.5) + 1):
        if number % i == 0:
            return False
    
    return True

n = int(input())

for i in range(0, n):
    number = int(input())
    if(is_prime(number)):
        print('Prime')
    else:
        print('Not Prime')
