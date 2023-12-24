#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    
    ep = 0
    en = 0
    ez = 0
    
    for i in arr:
        if i>0:
            ep+=1
        elif i<0:
            en+=1
        else:
            ez+=1
        
    print(ep/len(arr))
    print(en/len(arr))
    print(ez/len(arr))
    # Write your code here

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
