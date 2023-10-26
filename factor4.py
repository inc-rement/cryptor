#!/usr/bin/python
import math
import time
import sys 
import pdb
from curve import Curve
import numpy as np
from curve import bi, ib


curve=Curve()
#print(curve.n/curve.p)
#curve.g=([48439561293906451759052585252797914202762949526041747995844080717082404635286, 36134250956749795798585127919587881956611106672985015071877198253568414405109])

curve.p=9743
curve.n=94984507
#print(curve.g)


l=0
h=0
x1=0
y1=0
#1 95
#2 155
#3 205
#4 255
while True:
    x = (((30*10)))*28+l
    y = (pow(x, 3, curve.p)+curve.a*x+curve.b) % curve.p
    if math.sqrt(y)==int(math.sqrt(y)):
        print (l)
        h=h+1
        #curve.g=(x,int(math.sqrt(y)))
        #break
    l=l+1
    if h > 10:
        break

print("y=",y, "   x=",x)

x=(30*10)*28+13
y = (pow(x, 3, curve.p)+curve.a*x+curve.b) % curve.p
#print(chr(x+96))

curve.g=(x,int(math.sqrt(y)))
print(curve.valid(curve.g))
print(curve.g)


eM=curve.mul(curve.g, 251)
dM=curve.mul(eM, 189251)
print(dM)
print(curve.valid(dM))
#print("-------------")

print(((dM[0]/(28*10))))
#print(chr(int(dM[0]/30.8)))


