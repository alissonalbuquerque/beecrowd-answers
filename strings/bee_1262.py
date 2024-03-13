# -*- coding: utf-8 -*-

read_token = 'R'
write_token = 'W'
cycle_token = '*'

while True:
    try:
        trail = input()
        process = int(input())

        process_read_token = read_token * process

        process_read_token_list = []
        for i in range(len(process_read_token)):
            process_read_token_list.append(process_read_token[0:i+1])

        process_read_token_list.reverse()

        machine_cycle = trail
        for process_read_token_item in process_read_token_list:
            machine_cycle = machine_cycle.replace(process_read_token_item, cycle_token)

        machine_cycle = machine_cycle.replace(write_token, cycle_token)

        print(len(machine_cycle))

    except EOFError:
        break
