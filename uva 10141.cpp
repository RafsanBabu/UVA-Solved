# UVA-Solved
some UVA problem solved by me
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;
    int count =0;
    string requirement;
    cin>>n >> p;
    while(!((n==0) && (p==0))){
            count = count+1;
            for(int i=0;i<=n;i++){
                getline(cin,requirement);
            }
            int max=0;
            float save_money = 100000.00;
            string save_company;
            string company;
            string proposal;
            float price;
            int proposal_met;
            for(int j=0;j<p;j++){
               getline(cin,company);
               scanf("%f",&price);
               scanf("%d",&proposal_met);
                for(int k=0;k<=proposal_met;k++){
                    getline(cin,proposal);
                }

                if((proposal_met>max) || (proposal_met==max && price<save_money)){
                    save_money = price;
                    save_company = company;
                    max = proposal_met;
                }

            }
            if(count>1){
                printf("\n");
            }
            printf("RFP #%d\n",count);
            cout<<save_company<<endl;
            cin>>n >>p;


    }

    return 0;
}
