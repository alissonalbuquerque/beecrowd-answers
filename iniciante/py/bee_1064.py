# -*- coding: utf-8 -*-

numbers = []
numbers.append(float(input()))
numbers.append(float(input()))
numbers.append(float(input()))
numbers.append(float(input()))
numbers.append(float(input()))
numbers.append(float(input()))

sum_positives = float(0)
count_positives = int(0)


for n in numbers:
    if n > 0:
        sum_positives += n
        count_positives += 1

media = sum_positives / count_positives

print('{} valores positivos'.format(count_positives))
print('{:.1f}'.format(media))
