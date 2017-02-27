#include<iostream>
#include<cstdio>
using namespace std;

long long int a[100000];

int main(){
    long long int n;
    while(scanf("%lld",&n)!=EOF){
        if(n==0) break;
        a[1]=1;
        a[2]=2;
        int i;
        for(i=3;i<=n;i++){
            a[i]=a[i-2]+a[i-1];
        }
        printf("%lld\n",a[n]);
    }
    return 0;
}
