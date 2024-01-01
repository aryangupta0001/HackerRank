#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the alternatingCharacters function below.
def alternatingCharacters(s):
    S = []
    T = []
    for i in range(len(s)):
        S.append(s[i])
    print(S)

    j=0
    i=0

    while i<len(S):
        if len(S)>1:
            try:
                while S[i] == S[i+1]:
                    del S[i+1]
                    j+=1

            except IndexError:
                break
        i+=1
        
    return j

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = alternatingCharacters(s)
        fptr.write(str(result) + '\n')

    fptr.close()
