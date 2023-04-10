# -*- coding: utf-8 -*-

name = input()
salary_fixed = float(input())
sales = float(input())

commision = sales * 0.15

total = salary_fixed + commision

print("TOTAL = R$ {:.2f}".format(total))
