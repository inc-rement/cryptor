#!/usr/bin/python

from primePy import primes
import math
for i in range(100):
    if primes.check(i):
        if(2==i%3):
            print(i)

print("----------------------")
for j in range(300):
    if(1==j%math.lcm(17+1,23+1)):
        print(j)



print("----------------------")
print("n= ", 17*23)
