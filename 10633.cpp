#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long n;
    int i;
    for(i=0;;i++){
        scanf("%ld",&n);
        if(n==0) break;
        printf("%ld %ld\n",n+1,n+2);
    }
    return 0;
}
