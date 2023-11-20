#!/usr/bin/python
from sympy.ntheory import primefactors
import sys
inputs=list(sys.stdin)
for s in inputs:
    print(primefactors(int(s)))
