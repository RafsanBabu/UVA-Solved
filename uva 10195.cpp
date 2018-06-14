#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
        double perimiter=(a+b+c)/2;
        double radius=((perimiter-a)*(perimiter-b)*(perimiter-c))/perimiter;
        if(sqrt(radius)!=0.000 && (a+b+c)!=0.000)
        printf("The radius of the round table is: %.3lf\n",sqrt(radius));
        else{
            printf("The radius of the round table is: 0.000\n");
        }



    }
    return 0;
}
