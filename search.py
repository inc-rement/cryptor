#!/usr/bin/python

from primePy import primes
import math
for i in range(128):
    if primes.check(i):
        if(2==i%3):
            print(i)

print("----------------------")
for j in range(3000):
    if(1==j%math.lcm(29+1,41+1)):
        print(j)



print("----------------------")
print("n= ", 29*41)
