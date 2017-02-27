#include<iostream>
#include<cstdio>
using namespace std;

int a[12],b[12];

int main(){
    long long int n,p;
    int i=0,j=0;
    while(scanf("%lld %lld",&n,&p)!=EOF){
        while(n!=0){
            a[i]=n%10;
            n/=10;
            i++;
        }
        while(p!=0){
            b[j]=p%10;
            p/=10;
            j++;
        }

    }
