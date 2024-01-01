#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    A = ar.copy()
    B = []
    counter = 0
    P = 0

    A.sort()

    for i in A:
        if i not in B:
            B.append(i)
    
    for i in B:
        for j in A:
            if i==j:
                counter+=1
        P = P + int(counter/2)
        counter = 0
    
    return P
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
