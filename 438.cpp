#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double distance(double a,double b,double c,double d){
       double dist=(fabs(a-c)*fabs(a-c))+ (fabs(b-d)*fabs(b-d));
       return sqrt(dist);
}


int main()
{
    double x1,x2,x3,y1,y2,y3;
    while(6==scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)){

            double ab=distance(x1,y1,x2,y2);
            double bc=distance(x2,y2,x3,y3);
            double ca=distance(x3,y3,x1,y1);

            double l_mul=ab*bc*ca;
            double sum_l=(ab+bc+ca)*(ab+bc-ca)*(bc+ca-ab)*(ab+ca-bc);
            sum_l=sqrt(sum_l);
            double radius=l_mul/sum_l;
            printf("%.2lf\n",2*3.141592653589793*radius);



    }
    return 0;
}
