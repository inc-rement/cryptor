//#include<stdio.h>
//#include<math.h>
#include <cfenv>
#include <cmath>
#include <iostream>


//naibolsiy obshiy delitel
int gcd(long int a, long int h)
{
    long int temp;
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
int p=3,q=11;//prostie chisla
int n=p*q;//module
std::cout <<"n "<< n << std::endl;
int phi=(p-1)*(q-1);//func Eilera
std::cout << "phi " << phi <<std::endl;
int e=2;//min prostoe
while(e<phi){
//nahojdeniye e открытой экспоненты
if (gcd(e, phi)==1)
            break;
        else
            e++;

}
//e=7;
std::cout<<"e "<<e<<std::endl;
int k=2;//mnogitel
int d = (1 + (k*phi))/e; //вычислить секретную экспоненту
//d=3;
std::cout<<"d "<<d<<std::endl;
int msg=3;
//std::cout<<"input: "<<std::endl;
//
//std::cin>>msg;


std::cout<<"msg: "<<msg<<std::endl;
//int N = 5;
//int x = (int)character - 48;

//std::cout<<N<<std::endl;


//std::cout<<static_cast<char>(N)<<std::endl;



int c=modf(int(pow(msg,e)),n);


std::cout<<"encrypted: "<<c<<std::endl;



int m = int(pow(c,d))%n;


std::cout<<"decrypted: "<<m<<std::endl;

return 0;


}
