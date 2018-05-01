#include <bits/stdc++.h>
using namespace std;

int printDivisors(int n)
{
    int sum_of_divisor=0;

    for (int i=1; i<=n; i++)
    {
         if((n%i)==0){
            sum_of_divisor=sum_of_divisor + i;
         }
    }
    return sum_of_divisor;
}


int main()
{
    int s,count=0;;
    while(scanf("%d",&s) && s!=0){
            int number=0;
        for(int k=s;k>=1;k--){
            int result = printDivisors(k);
            if(result==s){
                number=k;
                break;
            }
        }
        count=count+1;
        if(number!=0){
        printf("Case %d: %d\n",count,number);
        }
        else{
        printf("Case %d: -1\n",count);
        }
    }

    return 0;
}
