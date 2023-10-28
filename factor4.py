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

class Cryptor:
    def __init__(self):
        self.message=0    
        self.l=0
        self.h=0
        #inputs = list(sys.stdin)  # Get all of stdin
        #inputs = inputs[0]  # Get only the first line
        #inputs = inputs.split()  #  p
        self.X=0 #int(inputs[0])
        self.x=0
        self.y=0

    def ele(self):        
        while True:
            self.x = (((self.X*10)))*28+self.l
            self.y = (pow(self.x, 3, curve.p)+curve.a*self.x+curve.b) % curve.p
            if math.sqrt(self.y)==int(math.sqrt(self.y)):
                break
            self.l=self.l+1
    
    def code(self):
        print("y=", self.y, "   x=", self.x)
        curve.g=(self.x,int(math.sqrt(self.y)))
        print(curve.valid(curve.g))
        print(curve.g)
        eM=curve.mul(curve.g, 251)
        dM=curve.mul(eM, 189251)
        print(dM)
        print(curve.valid(dM))
        print("decode=",math.floor((dM[0]/(28*10))))

cryptor=Cryptor()
inputs=list(sys.stdin)
for i in inputs:
    cryptor.X=int(i)
    cryptor.ele()
    cryptor.code()
