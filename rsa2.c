#include<stdio.h>
#include<math.h>


//naibolsiy obshiy delitel
int gcd(int a, int h)
{
    int temp;
    while (1)
    {
        temp = a%h;
        if (temp == 0)
          return h;
        a = h;
        h = temp;
    }
}


int main(){
int p=3,q=7;//prostie chisla
int n=p*q;//module
int phi=(p-1)*(q-1);//func Eilera

int e=2;//min prostoe
while(e<phi){
//nahojdeniye e
if (gcd(e, phi)==1)
            break;
        else
            e++;

}
int k=2;//mnogitel
int d = (1 + (k*phi))/e;

int msg=12;

printf("msg:%i\n",msg);

int c = pow(msg, e);
    c = fmod(c, n);


printf("encrypted:%i\n",c);



int m = pow(c, d);
    m = fmod(m, n);


printf("decrypted:%i\n",m);

return 0;


}
