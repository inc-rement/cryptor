#!/usr/bin/python

from primePy import primes
import math
for i in range(128):
    if primes.check(i):
        if(2==i%3):
            print(i)

print("----------------------")
for j in range(10000):
    if(1==j%math.lcm(107+1,113+1)):
        print(j)



print("----------------------")
print("n= ", 107*113)
