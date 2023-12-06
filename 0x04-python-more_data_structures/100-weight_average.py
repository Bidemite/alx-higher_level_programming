#!/usr/bin/python3
def weight_average(my_list=[]):
    if isinstance(my_list, list) and len(my_list) is not 0:
        prod = 0
        weight = 0
        for a_tuple in my_list:
            # may need to check tuple lengths
            prod += a_tuple[0] * a_tuple[1]
            weight += a_tuple[1]
        return prod / weight
    else:
        return 0
