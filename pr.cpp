#include <gmp.h>
#include <iostream>
#include <cmath>
#include <numeric>
#include <cassert>
#include "curve.h"
using namespace std;
int main() {
    Curve *curve=new Curve();
    curve->g=(new Point("48439561293906451759052585252797914202762949526041747995844080717082404635286", "36134250956749795798585127919587881956611106672985015071877198253568414405109"));
     cout<<curve->valid(curve->g)<<endl;
    //mpz_class g(2+3);
    //cout<<g<<endl;
    mpz_t n, s;
    mpz_init(n);
    mpz_init(s);
	mpz_set_ui(n, 2);
	mpz_set_ui(s, 3);
    for (size_t i = 0; i < 100; i++) { // first 1000 primes
    //for (size_t j = 0; j < 100; j++) {
    mpz_nextprime(n, n);
        //cout << "The " << (i + 1) << "th " << " prime is " << mpz_get_ui(n) << endl;
	//cout<<mpz_get_ui(n)<<endl;
	
	//mpz_nextprime(s,s);

	//cout<<mpz_get_ui(s)<<endl;

	
//if(((mpz_get_ui(n)%3)==2%3)){cout<<(mpz_get_ui(n)%3)<<endl;cout<<(mpz_get_ui(n))<<endl;}

}
//}


}
