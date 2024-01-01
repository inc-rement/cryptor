#include <gmp.h>
#include <math.h>
#include <gmpxx.h>
#include <iostream>
#include <string>
class Curve{
    public:
        //# curve parameters for NIST P-256 (ANSI prime256v1, SECG secp256r1)
        //# https://www.nsa.gov/ia/_files/nist-routines.pdf
        //# http://perso.univ-renes1.fr/sylvain.duquesne/master/standards/sec2_final.pdf
        //p = 2**256-2**224+2**192+2**96-1
        //a = self.p-3
	//b = 41058363725152142129326129780047268409114441015993725554835256314039467401291
        //gx = bi("6b17d1f2 e12c4247 f8bce6e5 63a440f2 77037d81 2deb33a0 f4a13945 d898c296".replace(" ", "").encode().hex())
        //gy = bi("4fe342e2 fe1a7f9b 8ee7eb4a 7c0f9e16 2bce3357 6b315ece cbb64068 37bf51f5".replace(" ", "").encode().hex())
        //g = [gx,gy]

};


int main(void)
{
	mpz_class n("115792089210356248762697446949407573529996955224135760342422259061068512044369");
   std::cout<<n<<std::endl;


   return EXIT_SUCCESS;
}
