#!/usr/bin/python3
def roman_to_int(roman_string):
    if isinstance(roman_string, str):
        val = dict(I=1, V=5, X=10, L=50, C=100, D=500, M=1000)
        spec = dict(I='VX', X='LC', C='DM')
        total = 0
        i = 0
        s_len = len(roman_string)
        while i < s_len:
            c = roman_string[i]
            if c in spec.keys():
                if i + 1 < s_len and roman_string[i + 1] in spec[c]:
                    total += val[roman_string[i + 1]] - val[c]
                    i += 1
                else:
                    total += val[c]
            else:
                total += val[c]
            i += 1
        return total
    else:
        return 0
