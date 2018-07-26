#include <stdio.h>
#include <stdlib.h>

int main()
{
    double px,py,qx,qy,qx1,qy1,rx,ry;

    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&px,&py,&qx,&qy,&qx1,&qy1,&rx,&ry)==8){
          if((qx==qx1 && qy==qy1) || (qx==rx && qy==ry)){
            if(qx!=qx1 || qy!=qy1){
                rx=qx1;
                ry=qy1;
            }
            else{
                rx=rx;
                ry=ry;
            }
            printf("%.3lf %.3lf\n",px+rx-qx,py+ry-qy);
          }
          else{
                double sx,sy;
                if(px!=qx1 || py!=qy1){
                     sx=qx1;
                     sy=qy1;
                }
                else{
                sx=rx;
                sy=ry;
            }
            printf("%.3lf %.3lf\n",sx+qx-px,sy+qy-py);
          }

    }
    return 0;
}
