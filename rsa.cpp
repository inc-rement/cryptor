//#include<stdio.h>
//#include<math.h>
#include <cfenv>
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int public_key;
int private_key;
int n;


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
/*void setkeys()
{
        int prime1 = 11;//pickrandomprime(); // first prime number
        int prime2 = 17;//pickrandomprime(); // second prime number
        // to check the prime numbers selected
        // cout<<prime1<<" "<<prime2<<endl;
        n = prime1 * prime2;
        int fi = (prime1 - 1) * (prime2 - 1);
        int e = 2;
        while (1) {
                if (__gcd(e, fi) == 1)
                        break;
                e++;
        } // d = (k*<CE><A6>(n) + 1) / e for some integer k
        public_key = e;
        int d = 2;
        while (1) {
                if ((d * e) % fi == 1)
                        break;
                d++;
        }
        private_key = d;
}
*/
long long int encrypt(double message)
{
        int e = public_key;
        long long int encrpyted_text = 1;
        while (e--) {
                encrpyted_text *= message;
                encrpyted_text %= n;
        }
        return encrpyted_text;
}
// to decrypt the given number
long long int decrypt(int encrpyted_text)
{
        int d = private_key;
        long long int decrypted = 1;
        while (d--) {
                decrypted *= encrpyted_text;
                decrypted %= n;
        }
        return decrypted;
}

int main(){
int p=11,q=17;//prostie chisla
n=p*q;//module
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
//setkeys();
public_key=e;
private_key=d;

int msg=3;
//std::cout<<"input: "<<std::endl;
//
//std::cin>>msg;


std::cout<<"msg: "<<msg<<std::endl;
//int N = 5;
//int x = (int)character - 48;

//std::cout<<N<<std::endl;


//std::cout<<static_cast<char>(N)<<std::endl;



long long int c=encrypt(msg);
//c=c%n;


std::cout<<"encrypted: "<<encrypt(msg)<<std::endl;



long long int m = decrypt(c);

//m=m%n;
std::cout<<"decrypted: "<< decrypt(encrypt(msg)) <<std::endl;

return 0;


}
