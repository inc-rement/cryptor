#include <gmp.h>
#include <iostream>
#include <cmath>
#include <numeric>
#include <cassert>
using namespace std;
int main() {
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

	
if(((mpz_get_ui(n)%3)==2%3)){cout<<(mpz_get_ui(n)%3)<<endl;cout<<(mpz_get_ui(n))<<endl;}

}
//}


}
