#include <string>
#include <gmp.h>
#include <gmpxx.h>
#include <cmath>
using namespace std;
/*
import gmpy2

def bi(s):
    i=0
    for c in s:
        i<<=8
        i|=ord(c)
    return i

def ib(i,l=32):
    s=""
    while l:
        s=chr(0xff & i) +s
        i>>=8
        l-=1
    return s
}
*/
class Point{
	public:
	mpz_class x;
	mpz_class y;
	Point(mpz_class X, mpz_class Y):x{X}, y{Y}{}
	Point(string X, string Y):x{mpz_class(X)}, y{mpz_class(Y)}{}

};



//# curve implementation in python
class Curve{
    public:
    //# curve parameters for NIST P-256 (ANSI prime256v1, SECG secp256r1)
    //# https://www.nsa.gov/ia/_files/nist-routines.pdf
    //# http://perso.univ-renes1.fr/sylvain.duquesne/master/standards/sec2_final.pdf
    
	mpz_class p=mpz_class("115792089210356248762697446949407573530086143415290314195533631308867097853951");//(pow(2,256)-pow(2,224)+pow(2,192)+pow(2, 96)-1);
	mpz_class a=mpz_class(p-3);
	mpz_class b=mpz_class("41058363725152142129326129780047268409114441015993725554835256314039467401291");
        //mpz_set_ui(n, 2);gx = bi("6b17d1f2 e12c4247 f8bce6e5 63a440f2 77037d81 2deb33a0 f4a13945 d898c296".replace(" ", "").encode().hex())
        //mpz_set_ui(n, 2);gy = bi("4fe342e2 fe1a7f9b 8ee7eb4a 7c0f9e16 2bce3357 6b315ece cbb64068 37bf51f5".replace(" ", "").encode().hex())
        Point *g;// = [gx,gy]
        mpz_class n=mpz_class("115792089210356248762697446949407573529996955224135760342422259061068512044369");

    bool valid(Point *point){
        mpz_class xP = mpz_class(point->x);
        if (xP == NULL)return false;
        mpz_class yP=mpz_class(point->y);
	//return (yP*yP) % p == (((xP*xP*xP)%p)+a*xP+b) %p;        
	//cout<<mpz_pow_ui(yP.get_mpz_t(),yP.get_mpz_t(),2);// % p; 
	mpz_powm(yP.get_mpz_t(),yP.get_mpz_t(),mpz_class(2).get_mpz_t(),p.get_mpz_t());
	//cout<<(p)<<endl;
	//cout<<yP<<endl;
	mpz_class xP1=mpz_class(xP);
	mpz_powm(xP.get_mpz_t(),xP.get_mpz_t(),mpz_class(3).get_mpz_t(),p.get_mpz_t());
	xP=xP+a*xP1+b;
	mpz_mod(xP.get_mpz_t(),xP.get_mpz_t(),p.get_mpz_t());
	//cout<<xP<<endl;
	return yP==xP;
}
/*
    def add(self, P, Q):
        #P+P=2P
        if P==Q:
            return self.dbl(P)
        #P+0=P
        if P[0]==None:
            return Q
        if Q[0]==None:
            return P
        xP=P[0]
        yP=P[1]
        xQ=Q[0]
        yQ=Q[1]
        s=(yP-yQ)*gmpy2.invert(xP-xQ, self.p) % self.p
        xR=(pow(s,2,self.p)-xP-xQ) % self.p
        yR=(-yP+s*(xP-xR)) % self.p
        R=[xR,yR]
        return R

    def dbl(self,P):
        # 2*0=0
        if P[0]==0:
            return P
        
        # yP==0
        if P[1]==0:
            return [None, None]

        xP=P[0]
        yP=P[1]
        s=(3*pow(xP,2 ,self.p)+self.a)* gmpy2.invert(2*yP, self.p) % self.p
        xR=(pow(s,2,self.p)-2*xP)%self.p
        yR=(-yP+s*(xP-xR))%self.p
        R=[xR,yR]
        return R

    def mul(self, P, k):
        # x0=0
        if P[0]==None:
            return P

        N=P
        R=[None, None]
        
        while k:
            bit=k%2
            k>>=1
            if bit:
                R=self.add(R,N)
            N=self.dbl(N)

        return R

}*/
};
//#curve=Curve()
//#curve.g=([48439561293906451759052585252797914202762949526041747995844080717082404635286, 36134250956749795798585127919587881956611106672985015071877198253568414405109])
