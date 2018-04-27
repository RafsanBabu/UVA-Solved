#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{

    if (a == 0 || b == 0)
       return 0;


    if (a == b)
        return a;


    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    string s;
    getline(cin,s);
    stringstream geek(s);
    int test = 0;
    geek >> test;
    for(int i=1;i<=test;i++){

                getline(cin,s);
                char ns[10000];
                int p=0;
                int p_int[101];
                int converted;
                int o=0;
            for(int j=0;j<s.size();j++){
                    if(s[j]>='0' && s[j]<='9'){
                        ns[o]=s[j];
                        o=o+1;
                    }
                    if(s[j]==' '){
                        ns[o]='\0';
                        stringstream geek(ns);

                        converted=0;
                        geek>>converted;
                        p_int[p]=converted;
                        p=p+1;
                        o=0;
                    }
                    if(j==s.size()-1){
                        ns[o]='\0';
                        stringstream geek(ns);

                        converted=0;
                        geek>>converted;
                        p_int[p]=converted;
                        p=p+1;
                        o=0;
                    }

            }
            vector<int>output;
            if(p==2){
                output.push_back(gcd(p_int[0],p_int[1]));
            }
            else{
            for(int u=0;u<=p-2;u++){
                    for(int k=u+1;k<p;k++){
                    output.push_back(gcd(p_int[u],p_int[k]));
                    }

            }
            }
            sort(output.begin(),output.end());
            int c=output.size();
            cout<<output[c-1]<<endl;



    }
    return 0;
}
