#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int i,t;
    double f,a,c,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf%lf",&c,&d);
        f=9*c/5+d;
        a=f*5/9;
        printf("Case %d: %.2lf\n",i,a);
        a=0;
    }
    return 0;
}
