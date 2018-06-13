#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int test_case,a,b,c;
    scanf("%lld",&test_case);
    for(long long int i=1;i<=test_case;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        int flag=0;
        if((a+b)>c && (a+c)>b && (b+c)>a){
            if(a==b && b==c && c==a){
                printf("Case %lld: Equilateral\n",i);
                flag=1;
            }
            if((a!=b) && (b!=c) && (c!=a)){
                printf("Case %lld: Scalene\n",i);
            }
            if(((a==b) || (b==c) || (c==a)) && flag==0){
                printf("Case %lld: Isosceles\n",i);
            }
        }
        else{
            printf("Case %d: Invalid\n",i);
        }
    }
    return 0;
}
