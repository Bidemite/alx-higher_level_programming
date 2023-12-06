#!/usr/bin/python3
def uniq_add(my_list=[]):
    if isinstance(my_list, list):
        uniq_sum = 0
        for i in set(my_list):
            uniq_sum += i
        return uniq_sum
