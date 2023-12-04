#!/usr/bin/python3
def no_c(my_string):
    rem_c = [char for char in my_string if char not in 'cC']
    return ("".join(rem_c))
