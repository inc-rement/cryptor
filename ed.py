#!/usr/bin/python

from primePy import primes
import math
import sys
inputs=list(sys.stdin)
g=False
i1=0
i2=0
for i in inputs:
    #print(i1,i2)
    if g == False:
        #print("---------------")
        i1=int(i)
        g=True
        continue
    if g == True:
        i2=int(i)
        g=False
        #print(i2, i1)
        for j in range(2, 1000000000):
            if(1==j%math.lcm(i1+1,i2+1)):
                print(j)
        print("---------------")
