#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    int i;
    for(i=1;i<=test;i++){
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int l1 = str1.size();
        int j;
        int k=0,v=0;
        string key1[1000];
        string value1[1000];
        char ky1[1000];
        char val1[1000];
        int a=0,s=0;
        for(j=0;j<l1;j++){
            if(str1[j]>='a' && str1[j]<='z'){
                ky1[k]=str1[j];
                k=k+1;
            }
            if(str1[j]>='0' && str1[j]<='9'){
                val1[v]=str1[j];
                v=v+1;
            }
            if(str1[j]==':'){
                ky1[k]='\0';
                key1[a]=ky1;
                k=0;
                a=a+1;
            }
            if(str1[j]==',' || str1[j]=='}'){
                val1[v]='\0';
                v=0;
                value1[s]=val1;
                s=s+1;
            }

        }
        int kk=0,vv=0;
        string key2[1000];
        string value2[1000];
        char ky2[1000];
        char val2[1000];
        int aa=0,ss=0;
        int l2 = str2.size();
        for( j=0;j<l2;j++){
            if(str2[j]>='a' && str2[j]<='z'){
                ky2[kk]=str2[j];
                kk=kk+1;
            }
            if(str2[j]>='0' && str2[j]<='9'){
                val2[vv]=str2[j];
                vv=vv+1;
            }
            if(str2[j]==':'){
                ky2[kk]='\0';
                key2[aa]=ky2;
                kk=0;
                aa=aa+1;
            }
            if(str2[j]==',' || str2[j]=='}'){
                val2[vv]='\0';
                vv=0;
                value2[ss]=val2;
                ss=ss+1;
            }

        }
    string newly_added[1000];
    string removed[1000];
    string value_changed[1000];
    int it1,it2;
    int save;
    int re=0,vl=0;
    for(it1=0;it1<a;it1++){
            int flag=0;
        for(it2=0;it2<aa;it2++){
            if(key1[it1]==key2[it2]){
                flag=1;
                save = it2;
            }
        }
        if(flag==0){
            removed[re]=key1[it1];
            re=re+1;
        }
        if(flag==1 && (value1[it1]!=value2[save])){
            value_changed[vl]=key1[it1];
            vl=vl+1;
        }
    }
    int ut1,ut2;
    int ne=0;
    for(ut2=0;ut2<aa;ut2++){
            int tlag=0;
        for(ut1=0;ut1<a;ut1++){
            if(key2[ut2]==key1[ut1]){
                tlag=1;
            }
        }
        if(tlag==0){
            newly_added[ne]=key2[ut2];
            ne=ne+1;
        }
    }
    int oa,ob,oc;
    if(re==0 && ne==0 && vl==0){
    cout<<"No changes"<<endl;
    }
    else{
    sort(newly_added,newly_added+ne);
    if(ne>0){
    printf("+");
    for(oa=0;oa<ne;oa++){
        cout<<newly_added[oa];
        if(oa!=ne-1){
            cout<<',';
        }
    }
    cout<<endl;
    }
    sort(removed,removed+re);
    if(re>0){
    printf("-");
    for(ob=0;ob<re;ob++){
        cout<<removed[ob];
        if(ob!=re-1){
            cout<<',';
        }
    }
    cout<<endl;
    }
    sort(value_changed,value_changed+vl);
    if(vl>0){
    printf("*");
    for(oc=0;oc<vl;oc++){
        cout<<value_changed[oc];
        if(oc!=vl-1){
            cout<<',';
        }
    }
    cout<<endl;
    }



    }
    cout<<endl;
    }
    return 0;
}
