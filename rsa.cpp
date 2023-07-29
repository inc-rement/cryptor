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
if (__gcd(e, phi)==1)
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


std::cout<<"encrypted: "<<c<<std::endl;



long long int m = decrypt(c);

//m=m%n;
std::cout<<"decrypted: "<< m <<std::endl;

return 0;


}
