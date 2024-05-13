#include <gmp.h>
#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;
int main() {
    mpz_t n, s;
    mpz_init(n);
    mpz_init(s);
	mpz_set_ui(n, 2);
	mpz_set_ui(s, 3);
    for (size_t i = 0; i < 100; i++) { // first 1000 primes
    for (size_t j = 0; j < 100; j++) {
    mpz_nextprime(n, n);
        //cout << "The " << (i + 1) << "th " << " prime is " << mpz_get_ui(n) << endl;
	//cout<<mpz_get_ui(n)<<endl;
	
	mpz_nextprime(s,s);

	//cout<<mpz_get_ui(s)<<endl;

	
//if((2%(mpz_get_ui(n))==2%(mpz_get_ui(s)))){cout<<2%(mpz_get_ui(n))<<2%(mpz_get_ui(s))<<endl;cout<<(mpz_get_ui(n))<<" "<<(mpz_get_ui(s))<<endl;}

}
}
int n1=7927*7933;

//int n1=541*547;

int e,d;
    for (size_t i = 0; i < 100000; i++) { // first 1000 primes
    for (size_t j = 0; j < 100000; j++) { // first 1000 primes
		e=i;
		d=j;

	if(1==((e*d)%lcm(7919+1,7907+1)))cout<< e<<","<<d<<endl;
}
}

//cout<< n1<<endl;
//cout<<399<<","<<78823<<endl;





















}
