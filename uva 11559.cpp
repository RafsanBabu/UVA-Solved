#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int perticipants,budget,hotel_number,week_number;
    while(scanf("%d %d %d %d",&perticipants,&budget,&hotel_number,&week_number)==4){
    int save[5000];
    int o=0;
    for(int i=0;i<hotel_number;i++){
        int cost;
        scanf("%d",&cost);
        int flag=0;
        for(int j=0;j<week_number;j++){
            int week_day;
            scanf("%d",&week_day);

            if(week_day>=perticipants){
            flag=1;
            }
        }
        if(flag==1 && (cost*perticipants)<=budget){
            save[o]=cost*perticipants;
            o=o+1;
        }
    }
    if(o==0){
        printf("stay home\n");
    }
    else{
        sort(save,save+o);
        printf("%d\n",save[0]);
    }
    }

    return 0;
}
