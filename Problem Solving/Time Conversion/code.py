#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    news = s[0:8]
    a = news.split(":")
    b = []
    for i in a:
        b.append(int(i))
    
    if "PM" in s:
        if b[0]!=12:
            b[0]+=12
    if "AM" in s:
        if b[0] == 12:
            b[0] = 0
    
    c = []
    
    if b[0]<10:
        c.append("0" + str(b[0]) + ":")
    else:
        c.append(str(b[0]) + ":")
    
    if b[1]<10:
        c.append("0" + str(b[1]) + ":")
    else:
        c.append(str(b[1]) + ":")
    
    if b[2]<10:
        c.append("0" + str(b[2]))
    else:
        c.append(str(b[2]))

    c = "".join(c)
    return c
    # Write your code here

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
