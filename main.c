#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,m,c;
    while(scanf("%lld %lld %lld",&n,&m,&c) &&(n!=0 && m!=0)){
        long long int row=(n-8)+1;
        long long int col=(m-8)+1;
        if(c==1){
            if((row*col)%2==0){
                printf("%lld\n",(row*col)/2);
            }
            else{
                printf("%lld\n",((row*col)/2)+1);
            }
        }

        if(c==0){
            if((row*col)%2==0){
                printf("%lld\n",(row*col)/2);
            }
            else{
                printf("%lld\n",((row*col)/2));
            }
        }
    }
    return 0;
}
