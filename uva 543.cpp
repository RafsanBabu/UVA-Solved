#include <bits/stdc++.h>
using namespace std;


 bool prime[1000002];


void SieveOfEratosthenes(int n)
{

    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

}


int main()
{
    SieveOfEratosthenes(1000000);
    long long int n;
    while(scanf("%lld",&n) && n!=0){
            long long int a,b;
            int flag=0;

    for(long long int j=2;j<n;j++){
        long long int k=n-j;
        if(prime[j]==1 && prime[k]==1){
            flag=1;
            a=j;
            b=k;
            flag=1;
            break;
        }
    }
    if(flag==1){
        if(a>b){
            printf("%lld = %lld + %lld\n",n,b,a);
        }
            else{
            printf("%lld = %lld + %lld\n",n,a,b);
            }
        }

    else{
        printf("Goldbach's conjecture is wrong.\n");
    }
    }
    return 0;
}
