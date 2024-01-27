# -*- coding: utf-8 -*-

a, b, c = [int(x) for x in input().split()]

face_sad = ":("
face_happy = ":)"

if b < a and c >= b:
    print(face_happy)
elif b > a and c <= b:
    print(face_sad)
elif b > a and c > b and c - b < b - a:
    print(face_sad)
elif b > a and c > b and c - b >= b - a:
    print(face_happy)
elif b < a and c < b and b - c < a - b:
    print(face_happy)
elif b < a and c < b and b - c <= a - b:
    print(face_sad)
elif b == a and c > b:
    print(face_happy)
else:
    print(face_sad)
