//#include<stdio.h>
//#include<math.h>
#include <cfenv>
#include <cmath>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;



int main(){
int p=11,q=17;//prostie chisla
int n=p*q;//module
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
//public_key=e;
//private_key=d;

char message;
std::cout<<"input: "<<std::endl;
//
std::cin>>message;


std::cout<<"msg: "<<message<<std::endl;
//int N = 5;
int x = (int)message;

//std::cout<<N<<std::endl;


//std::cout<<static_cast<char>(N)<<std::endl;



//long long int c=encrypt(msg);
//c=c%n;
long long int encrpyted_text = 1;
        while (e--) {
                encrpyted_text *= x;
                encrpyted_text %= n;
        }
long long int c=encrpyted_text;

std::cout<<"encrypted: "<<c<<std::endl;

long long int decrypted = 1;
        while (d--) {
                decrypted *= encrpyted_text;
                decrypted %= n;
        }


std::cout<<"decrypted: "<<static_cast<char>(decrypted)<<std::endl;

//m=m%n;
//std::cout<<"decrypted: "<< decrypted <<std::endl;

return 0;


}
