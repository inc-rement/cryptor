#!/usr/bin/python

from primePy import primes
import math
p= 49853
q= 49871

n=p*q
ed=1


for i in range(49000, 49877):
    if primes.check(i):
        if(2==i%3):
            print("p or q=", i)
print("----------------------")
print("p=",p)
print("q=",q)
print("n=", n)

print("----------------------")
print("wait")
for j in range(1000000000):
    if(1==j%math.lcm(p+1,q+1)):
        print("ed=",j)
