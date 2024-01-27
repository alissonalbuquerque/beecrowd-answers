# -*- coding: utf-8 -*-

n = int(input())

spaces = n * n

quocient = spaces // 2
rest = spaces % 2

spaces_white = quocient + rest
spaces_black = quocient

print(f"{spaces_white} casas brancas e {spaces_black} casas pretas")
