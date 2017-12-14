#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loan_duration,depriciation_record;
    float down_payment,loan;
    while(scanf("%d %f %f %d",&loan_duration,&down_payment,&loan,&depriciation_record)==4){
        if(loan_duration<0){
            break;}
        else{
        int i;
        int depriciation_serial[200];
        float depriciation_value[200];
        for(i=0;i<depriciation_record;i++){
            scanf("%d %f",&depriciation_serial[i],&depriciation_value[i]);
        }


    float monthly_payment = loan/loan_duration;

    float car_value = down_payment + loan;

    float save_depriciation;
    int flag=0;

        int j;
        for(j=0;j<loan_duration;j++){
            int k;
            for(k=0;k<depriciation_record;k++){
            if(j>=depriciation_serial[k]){

                save_depriciation = depriciation_value[k];
            }
            }

            float new_car_value = save_depriciation*car_value;
            car_value = car_value - new_car_value;

            if(car_value>loan){
                    if(j==1){
                printf("%d month\n",j);
                flag=1;
                break;
                    }
                    else{
                        printf("%d months\n",j);
                        flag=1;
                        break;
                    }
            }
            loan = loan-monthly_payment;



        }
        if(flag==0){
            printf("%d months\n",j);
        }
    }
    }

    return 0;
}
