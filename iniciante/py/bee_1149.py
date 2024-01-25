# -*- coding: utf-8 -*-

values = [int(x) for x in input().split()]

a = values[0]
values = values[1:]

n = 0
for x in values:
    
    if(x > 0):
        n = x
        break

result = 0
for i in range(0, n):
    result = result + a + i

print(result)