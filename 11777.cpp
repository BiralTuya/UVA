#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int ct[3];

int main(){
    int t,t1=0,t2=0,f=0,a=0,avg=0,total=0;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        scanf("%d %d %d %d",&t1,&t2,&f,&a);
        int j;
        for(j=0;j<3;j++){
            scanf("%d",&ct[j]);
        }
        sort(ct,ct+3);
        //cout<<ct[1]<<" "<<ct[2]<<endl;
        avg=(ct[1]+ct[2])/2;
        total=(t1+t2+f+a+avg);
        if(total>=90) printf("Case %d: %c\n",i,'A');
        else if(total>=80 && total<90) printf("Case %d: %c\n",i,'B');
        else if(total>=70 && total<80) printf("Case %d: %c\n",i,'C');
        else if(total>=60 && total<70) printf("Case %d: %c\n",i,'D');
        else if(total<60) printf("Case %d: %c\n",i,'F');
        avg=0;total=0;
        }
        return 0;
}
