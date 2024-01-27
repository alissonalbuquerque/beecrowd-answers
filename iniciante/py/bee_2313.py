# -*- coding: utf-8 -*-

a, b, c = [int(x) for x in input().split(' ')]

def can_create_triangle(a, b, c):

    return (
        abs(b - c) < a and a < (b + c) and
        abs(a - c) < b and b < (a + c) and
        abs(a - b) < c and c < (a + b)
    )

def is_triangle_scalene(a, b, c):

    return (
        a != b and a != c and
        b != a and b != c and
        c != a and c != b
    )

def is_triangle_isosceles(a, b, c):
    
    return (
        not is_triangle_equilatero(a, b, c)
            and
        (
            a == b or a == c or
            b == a or b == c or
            c == a or c == b 
        )
    )

def is_triangle_equilatero(a, b, c):

    return (
        a == b and a == c and
        b == a and b == c and
        c == a and c == b
    )

def is_triangle_rectangle(a, b, c):

    values = [a, b, c]
    values.sort()

    a, b, c = values

    return a**2 + b**2 == c**2

output = ""
if can_create_triangle(a, b, c):

    if is_triangle_scalene(a, b, c):
        output = "Valido-Escaleno"
        
    if is_triangle_isosceles(a, b, c):
        output = "Valido-Isoceles"

    if is_triangle_equilatero(a, b, c):
        output = "Valido-Equilatero"

    if is_triangle_rectangle(a, b, c):
        output = output + "\n" + "Retangulo: S"
    else:
        output = output + "\n" + "Retangulo: N"

else:
    output = "Invalido"
    
print(output)