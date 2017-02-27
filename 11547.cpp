#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
using namespace std;

char str[1000000];

int main(){
    int t=0,n=0;
    int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,result=0;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++){
        scanf("%d",&n);
        r1=n*567;
        r2=r1/9;
        r3=r2+7492;
        r4=r3*235;
        r5=r4/47;
        r6=r5-498;
        //printf("%d\n",r6);
        result=abs((r6/10)%10);
        printf("%d\n",result);
    }
    return 0;
}
