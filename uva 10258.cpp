#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct Age
{
    int cnst,soln,reti;
};
bool cmp(const Age &a,const Age &b)
{
   if(a.soln==b.soln){
     if(a.reti==b.reti){
       return a.cnst<b.cnst;
     }
     else return a.reti<b.reti;
   }
   else return a.soln>b.soln;
}

int main()
{
    int cases;
    scanf("%d\n\n",&cases);
    for(int i=1;i<=cases;i++){
        string str;
         Age in[1000];
        int output=-1;
        int cot=-1;
        char verdict[1000];
        char save_verdict[1000];
        int time[1000],pno[1000],cno[1000];
        while(getline(cin,str)){
        if(str.size()==0)break;
        char cnn[20],pnn[20],pnl[20];
        int l = str.size();
        int p=0;
        for(int i=0;i<=4;i++){
            if(str[i]==' ')break;
            cnn[p]=str[i];
            p=p+1;
        }
        cnn[p]='\0';
        int k=0;
        pnn[k]=str[p+1];
        k=k+1;
        pnn[k]='\0';
        int y=0;
        for(int g=p+3;g<=l;g++){
            if(str[g]==' ')break;
            pnl[y]=str[g];
            y=y+1;
        }
        pnl[y]='\0';
        cot=cot+1;
        cno[cot]=atoi(cnn);
        pno[cot]=atoi(pnn);
        time[cot]=atoi(pnl);
        verdict[cot]=str[l-1];
        save_verdict[cot] = str[l-1];


        }

        for(int o=0;o<=cot;o++){
                int solved =0;
                int flag=0;
                int penalty = 0;
                for(int s=o-1;s>=0;s--){
                    if(cno[o]==cno[s]){
                        flag=1;
                    }
                }
                if(flag==0){

            for(int w=0;w<=cot;w++){
                if(cno[o]==cno[w]){


                    if(verdict[w]=='C'){

                            int meen = 10000;
                        for(int c=0;c<=cot;c++){
                            if(cno[w]==cno[c] && pno[w]==pno[c])
                                verdict[c]='v';
                            if(meen>>time[w]){
                                meen=time[w];
                            }
                        }
                        int wrong=0;
                        solved=solved+1;
                    if(meen==10000){
                        penalty=time[w]+penalty;}
                        else{
                            penalty = penalty+meen;
                        }
                        for(int s=0;s<=cot;s++){
                        if(pno[w]==pno[s] && save_verdict[s]=='I' && cno[w]==cno[s] && verdict[s]=='v' && w>s){
                            wrong =wrong+1;
                        }
                      }
                      wrong = wrong*20;
                      penalty=penalty+wrong;
                    }
                }

        }
        output=output+1;
        in[output].cnst=cno[o];
        in[output].soln=solved;
        in[output].reti = penalty;
        }
        }
        int out = output+1;
       sort(in,in+out,cmp);
       for(int t=0;t<=output;t++){
        cout<<in[t].cnst<<' '<<in[t].soln<<' '<<in[t].reti<<endl;
       }
       if(i!=cases){
       cout<<endl;}


    }
    return 0;
}
