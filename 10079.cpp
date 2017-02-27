#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int i;
    long int n;
    for(i=0;;i++){
        scanf("%ld",&n);
        if(n<0) break;
        else printf("%ld\n",((n*(n+1))/2)+1);
    }
    return 0;
}
