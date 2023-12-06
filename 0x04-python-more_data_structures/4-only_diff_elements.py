#!/usr/bin/python3
def only_diff_elements(set_1, set_2):
    if isinstance(set_1, set) and isinstance(set_2, set):
        return set_1 ^ set_2
