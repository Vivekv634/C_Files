// how to find factorial in python?
import math
math.factorial(1000)


def factorial(n):
    fact = 1
    for num in range(2, n + 1):
        fact *= num
    return fact


def factorial(n):
    if n < 2:
        return 1
    else:
        return n * factorial(n-1)



