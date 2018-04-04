#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    int days,i;
    while(cin>>days && days!=0){
    multiset <long long int > myvector;
    long long int billnumber;
    long long int sum=0;
    for(i=0;i<days;i++){
        cin>>billnumber;
        for(long long int j=0;j<billnumber;j++){
                long long int bill;
                cin>>bill;

            myvector.insert(bill);
        }
        multiset <long long  int > :: iterator it;
        it = myvector.begin();
        myvector.erase(it);
        long long int maximum = *it;
        it = myvector.end();
        it--;
        long long int minimum = *it;
        myvector.erase(it);

      long long int v = minimum - maximum;

      sum = sum + v;

   }
    cout<<sum<<endl;
    }



    return 0;
}
