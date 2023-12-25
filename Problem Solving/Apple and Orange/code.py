#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countApplesAndOranges' function below.
#
# The function accepts following parameters:
#  1. INTEGER s
#  2. INTEGER t
#  3. INTEGER a
#  4. INTEGER b
#  5. INTEGER_ARRAY apples
#  6. INTEGER_ARRAY oranges
#

def countApplesAndOranges(s, t, a, b, apples, oranges):
    
    da1 = s-a
    da2 = t-a
    do1 = b-t
    do2 = b-s
    sa = 0
    so = 0
    
    for i in apples:
        if i>=0:
            if i>=da1 and i<=da2:
                sa+=1
    
    for i in oranges:
        if i<=0:
            if -i>=do1 and -i<=do2:
                so+=1
    
    print(sa)
    print(so)
    
    # Write your code here

if __name__ == '__main__':
    
    first_multiple_input = input().rstrip().split()

    s = int(first_multiple_input[0])

    t = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()

    a = int(second_multiple_input[0])

    b = int(second_multiple_input[1])

    third_multiple_input = input().rstrip().split()

    m = int(third_multiple_input[0])

    n = int(third_multiple_input[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
