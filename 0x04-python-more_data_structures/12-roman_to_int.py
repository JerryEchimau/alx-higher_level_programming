#!/usr/bin/python3
def roman_to_int(roman_string):
    """
    converts a roman numeral into an integer
    """
    if not isinstance(roman_string, str) or roman_string is None:
        return (0)

    """ create a dictionary of roman numerals and their values """
    dictionary = {
            "I": 1, "V": 5, "X": 10, "L": 50,
            "C": 100, "D": 500, "M": 1000}

    """ initialize integer value and a previous value """
    int_value = 0
    previous_value = 0

    """ convert to int """
    for char in reversed(roman_string):
        current_value = dictionary.get(char, 0)
        if current_value < previous_value:
            int_value -= current_value
        else:
            int_value += current_value
        previous_value = current_value

    return (int_value)
