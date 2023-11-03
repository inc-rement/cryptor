#!/usr/bin/python
import math
import time
import sys 
import pdb
from curve import Curve
import numpy as np
from curve import bi, ib

curve=Curve()

curve.p=9743
curve.n=94984507
e=251
d=189251

class Cryptor:
    def __init__(self):
        self.message=0    
        self.l=0
        self.h=0
        self.x=0
        self.y=0

    def ele(self):        
        while True:
            self.x = (((self.message*30)))*28+self.l
            self.y = (pow(self.x, 3, curve.p)+curve.a*self.x+curve.b) % curve.p
            if math.sqrt(self.y)==int(math.sqrt(self.y)):
                break
            self.l=self.l+1
    
    def code(self):
        #print("y=", self.y, "   x=", self.x)
        curve.g=(self.x,int(math.sqrt(self.y)))
        #print(curve.valid(curve.g))
        #print(curve.g)
        eM=curve.mul(curve.g, e)
        dM=curve.mul(eM, d)
        #print(dM)
        #print(curve.valid(dM))
        print("message: ",math.floor((dM[0]/(28*30))))

cryptor=Cryptor()
inputs=list(sys.stdin)
for i in inputs:
    start = time.time()
    cryptor.message=int(i)
    cryptor.ele()
    cryptor.code()
    end = time.time()
    print(end - start)
