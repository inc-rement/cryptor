#include <gmp.h>
#include <math.h>
#include <gmpxx.h>
#include <iostream>
int main(void)
{

   mpz_class cc, t(23);
   mpz_pow_ui(cc.get_mpz_t(), t.get_mpz_t(), 76);
   std::cout<<cc<<std::endl;


   return EXIT_SUCCESS;
}
