#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int inversion(string s){
    int l = s.size();
    int m,n;
    int count =0;
    for(m=0;m<l;m++){
        for(n=m+1;n<l;n++){
            if(s[m]>s[n]){
                count = count+1;
            }
        }
    }
    return count;
}

int main()
{
    int datatest;
    scanf("%d\n",&datatest);
    int i;
    for(i=0;i<datatest;i++){
        int l_str,n_str;
        string str[100];
        int save[1000];
        int save_str[1000];
        scanf("%d %d",&l_str,&n_str);
        int j;
        for(j=0;j<n_str;j++){
            cin>>str[j];
            save[j]=inversion(str[j]);
            save_str[j]=save[j];
        }
        sort(save,save+n_str);
        int o,w;
        for(o=0;o<n_str;o++){
            for(w=0;w<n_str;w++){
                if(save[o]==save_str[w]){
                    cout<<str[w]<<endl;
                    save_str[w]=999999;
                    break;
                }
            }
        }
        if((i+1)!=datatest){
        printf("\n");}


    }
    return 0;
}
