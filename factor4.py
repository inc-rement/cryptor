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

class cryptor:
    def __init__(self):
        self.message=0    
        l=0
        h=0
        X=int(sys.argv[1])

    def ele():        
        while True:
            x = (((X*10)))*28+l
            y = (pow(x, 3, curve.p)+curve.a*x+curve.b) % curve.p
            if math.sqrt(y)==int(math.sqrt(y)):
                break
            l=l+1
    
    def code():
        print("y=",y, "   x=",x)
        curve.g=(x,int(math.sqrt(y)))
        print(curve.valid(curve.g))
        print(curve.g)
        eM=curve.mul(curve.g, 251)
        dM=curve.mul(eM, 189251)
        print(dM)
        print(curve.valid(dM))
        print("decode=",math.floor((dM[0]/(28*10))))


