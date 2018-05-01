#include <bits/stdc++.h>
# include <stdio.h>
# include <math.h>

using namespace std;
void primeFactors(long long int n)
{
    set<int> number;
    while (n%2 == 0)
    {

        number.insert(2);
        n = n/2;
    }

    for (long long int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {

           number.insert(i);
            n = n/i;
        }
    }

    if (n > 2)
       {

       number.insert(n);
       }

       cout<<number.size()<<endl;

}

int main()
{
    long long int n;
    while(scanf("%lld",&n) && n!=0){
    printf("%lld : ",n);
    primeFactors(n);
    }
    return 0;
}
