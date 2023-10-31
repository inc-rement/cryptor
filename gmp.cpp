#include <gmp.h>
#include <math.h>
#include <gmpxx.h>
#include <iostream>
int main(void)
{

   mpz_class cc, t;
   t=23;
   mpz_pow_ui(cc.get_mpz_t(), t.get_mpz_t(), 77777776);
   //cc=t^46;
   std::cout<<cc<<std::endl;


   return EXIT_SUCCESS;
}
