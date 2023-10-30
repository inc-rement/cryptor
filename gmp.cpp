#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
#include <math.h>
#include <gmpxx.h>

int main(void)
{

   mpf_class x3, y3, x4, y4;
   mpz_t a,c,d;
   unsigned long int b = 46;
   mpz_init(c);

   mpz_init_set_ui(a,23);
   //mpz_init_set_ui(b,45);

   mpz_pow_ui(c,a,b);

   gmp_printf("23^46: %Zd",c);
	printf("\n");




   return EXIT_SUCCESS;
}
