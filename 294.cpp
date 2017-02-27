#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
using namespace std;

int main(){
    long long l,h,maxn=0;
    int t,maxx=0;
    int c;
    long g;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&l,&h);
        if(l==1 && h==0)
            printf("Between 1 and 1, 0 has a maximum of 2 divisors.\n");
        else{
        long long i;
        for(i=l;i<=h;i++){
            g=sqrt(i);
            c=0;
            long j;
            for(j=1;j<=g;j++){
                if(i%j==0){
                  c++;
                  if(j<g) c++;
                }
            }
            if(c>maxx){
                maxx=c; maxn=i;
            }
        }
        printf("Between %lld and %lld, %lld has maximum of %d divisors.\n",l,h,maxn,maxx);}
    }
    return 0;
}
