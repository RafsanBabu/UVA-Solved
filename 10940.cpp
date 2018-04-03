# UVA-Solved
some UVA problem solved by me
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector <long long int>even_value;


int main()
{
     even_value.push_back(1);
    even_value.push_back(2);
    even_value.push_back(2);
    even_value.push_back(4);
    long long int item_to_push=6;
        for(long long int i=5;i<=500000;i++){
        if(i<item_to_push){
            item_to_push=2;
        }
        even_value.push_back(item_to_push);
        item_to_push = item_to_push+2;
    }
    long long int number_of_card;
    while(scanf("%lld",&number_of_card) && number_of_card!=0){
     if(number_of_card>4){
       cout <<even_value[number_of_card-1]<<endl;
    }

    else{
        if(number_of_card==1){
            cout<<1<<endl;
        }
                if(number_of_card==2){
            cout<<2<<endl;
        }
                if(number_of_card==3){
            cout<<2<<endl;
        }
                if(number_of_card==4){
            cout<<4<<endl;
        }
    }

    }
    return 0;
}
