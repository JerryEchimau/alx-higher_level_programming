#!/usr/bin/python3
if __name__ == "__main__":
    """handles basic operation calculations
    """
    from calculator_1 import add, sub, mul, div
    import sys

    if (len(sys.argv) - 1 != 3):
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)
    else:
        ops = {"+": add, "-": sub, "*": mul, "/": div}
        if (sys.argv[2] not in list(ops.keys())):
            print("Unknown operator. Available operators: +, -, * and /")
            sys.exit(1)
        else:
            a = int(sys.argv[1])
            b = int(sys.argv[3])
            calculation = ops[sys.argv[2]](a, b)
            print("{} {} {} = {}".format(a, sys.argv[2], b, calculation))
