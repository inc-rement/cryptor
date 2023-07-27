//#include<stdio.h>
//#include<math.h>
#include <cfenv>
#include <cmath>
#include <iostream>


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
//nahojdeniye e открытой экспоненты
if (gcd(e, phi)==1)
            break;
        else
            e++;

}
int k=2;//mnogitel
int d = (1 + (k*phi))/e; вычислить секретную экспоненту

int msg;
std::cout<<"input number: "<<std::endl;
std::cin>>msg;


std::cout<<"msg: "<<msg<<std::endl;

int c=(int)(pow(msg, e))%n;


std::cout<<"encrypted: "<<c<<std::endl;



int m = (int)(pow(c, d))%n;


std::cout<<"decrypted: "<<m<<std::endl;

return 0;


}
