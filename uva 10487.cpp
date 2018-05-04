#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    long long int count=0;
    while(scanf("%lld",&n) && n!=0){
        vector < long long int > number;
        long long int value;
        for(long long int i=0;i<n;i++){
            scanf("%lld",&value);
            number.push_back(value);
        }
        long long int number_of_query;
        long long int  query[1005];
        scanf("%lld",&number_of_query);

        for(long long int j=0;j<number_of_query;j++){
            scanf("%lld",&query[j]);
        }
        sort(number.begin(),number.end());
        count=count+1;
        printf("Case %lld:\n", count);

        for(long long int q=0;q<number_of_query;q++){
                long long int min=1000000000;
                long long int save;
            for(long long int k=0;k<number.size();k++){
                for(long long int l=k+1;l<number.size();l++){
                    long long int sum = number[k]+number[l];
                    long long int diff = abs(sum-query[q]);
                    if(diff<min){
                        min=diff;
                        save=sum;
                    }

                }
            }
            printf("Closest sum to %lld is %lld.\n",query[q],save);
        }

    }
    return 0;
}
