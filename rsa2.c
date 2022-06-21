
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
int p=3,q=7;
int n=p*q;
int phi=(p-1)*(q-1);

int e=2;
while(e<phi){

if (gcd(e, phi)==1)
            break;
        else
            e++;

}
int d = (1 + (2*phi))/e;

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
