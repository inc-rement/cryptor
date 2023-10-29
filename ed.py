#!/usr/bin/python

from primePy import primes
import math
import sys
inputs=list(sys.stdin)
g=False
for i in inputs:
    if g == False:
        i1=int(i)
        g=True
    if g == True:
        i2=int(i)
        g=False

    for j in range(100000):
        if(1==j%math.lcm(i1+1,i2+1)):
            print(j)

