#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
using namespace std;

int main(){
    //double n,sum1=0,sum2=0,sum3=0;
    long long sum=0,n=0;
    while(scanf("%lld",&n)!=EOF){
        sum=n*n*(n+1)*(n+1)/4;
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
