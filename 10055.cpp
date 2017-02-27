#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
using namespace std;

int main(){
    long long int a=0,b=0,c=0;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        c=abs(a-b);
        printf("%lld\n",c);
    }
    return 0;
}
