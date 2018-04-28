#include <bits/stdc++.h>
# include <stdio.h>
# include <math.h>

using namespace std;

void primeFactors(long long int n)
{
    vector<long long int>primefactor;
    cout<<n<<" = ";
    if(n<0){
        cout<<"-1 x ";
    }
    n=abs(n);
    if(n==1){
        cout<<"\n";
    }

    while (n%2 == 0)
    {
        primefactor.push_back(2);
        n = n/2;
    }


    for (long long int i = 3; i <= sqrt(n); i = i+2)
    {

        while (n%i == 0)
        {
            primefactor.push_back(i);
            n = n/i;
        }
    }


    if (n > 2){
        primefactor.push_back(n);
        }
        for(long long int k=0;k<primefactor.size();k++){
                if(k!=(primefactor.size()-1)){
            cout<<primefactor[k]<<" x ";
            }
            else{
                cout<<primefactor[k]<<endl;
            }
        }

}


int main()
{
    long long int n ;
    while(scanf("%lld",&n) && n!=0){
    primeFactors(n);
    }
    return 0;
}
