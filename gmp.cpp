#include <gmp.h>
#include <math.h>
#include <gmpxx.h>
#include <iostream>
int main(void)
{

   mpz_class x3, y3, x4, y4;
   mpz_class cc, t;
   t=23;
   mpz_pow_ui(cc.get_mpz_t(), t.get_mpz_t(), 46);

   std::cout<<"23^46: "<<cc<<std::endl;


   return EXIT_SUCCESS;
}
