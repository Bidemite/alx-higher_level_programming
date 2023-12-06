#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    if isinstance(a_dictionary, dict):
        match = list(k for k in a_dictionary.keys() if a_dictionary[k]
                     is value)
        for k in match:
                del a_dictionary[k]
        return a_dictionary
