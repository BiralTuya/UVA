#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    int i,n=0;
    double u=0,v=0,t=0,a=0,s=0;
    for(i=1;;i++){
        scanf("%d",&n);
        if(n==0) break;
        if(n==1){
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=(u*t)+((0.5)*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
            s=0;a=0;u=0;v=0;t=0;
        }
        if(n==2){
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=(u*t)+((0.5)*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
            s=0;t=0;u=0;v=0;a=0;
        }
        if(n==3){
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
            u=0;a=0;s=0;v=0;t=0;
        }
        if(n==4){
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
            v=0;a=0;s=0;u=0;t=0;
        }
    }
    return 0;
}
