#!/usr/bin/python

from primePy import primes
import math
p=9743
q=9749
n=p*q
ed=1


for i in range(9000, 10000):
    if primes.check(i):
        if(2==i%3):
            print("p or q=", i)

print("----------------------")
print("wait")
for j in range(100000000):
    if(1==j%math.lcm(9029+1,9011+1)):
        print("ed=",j)


print("----------------------")
print("p=",p)
print("q=",q)
print("n= ", n)
