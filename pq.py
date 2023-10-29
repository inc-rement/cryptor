#!/usr/bin/python

from primePy import primes
import math
import sys


for i in range(int(sys.argv[1]), int(sys.argv[2])):
    if primes.check(i):
        if(2==i%3):
            print(i)

