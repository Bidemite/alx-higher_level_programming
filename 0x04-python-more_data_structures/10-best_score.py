#!/usr/bin/python3
def best_score(a_dictionary):
    if isinstance(a_dictionary, dict):
        the_key = None
        for k in a_dictionary.keys():
            if the_key is None:
                the_key = k
            elif a_dictionary[k] > a_dictionary[the_key]:
                the_key = k
        return the_key
