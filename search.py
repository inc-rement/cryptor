#!/usr/bin/python

from primePy import primes
import math
for i in range(10000):
    if primes.check(i):
        if(2==i%3):
            print(i)

print("----------------------")
for j in range(100000000):
    if(1==j%math.lcm(9743+1,9749+1)):
        print(j)


print("----------------------")
print("n= ", 9743*9749)
