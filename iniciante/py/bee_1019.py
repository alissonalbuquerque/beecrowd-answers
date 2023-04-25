# -*- coding: utf-8 -*-

tempo_seg = int(input())

second = 1
minute = second * 60
hour = minute * 60

count_seg, count_min, count_hour = 0, 0, 0

while tempo_seg > 0 :
    if tempo_seg >= hour :
        count_hour = int(tempo_seg / hour)
        tempo_seg = tempo_seg % hour
    elif tempo_seg >= minute :
        count_min = int(tempo_seg / minute)
        tempo_seg = tempo_seg % minute
    else :
        count_seg = int(tempo_seg / second)
        tempo_seg = tempo_seg % second

print("{}:{}:{}".format(count_hour, count_min, count_seg))
