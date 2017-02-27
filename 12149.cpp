#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n,i,ans=0;
    for(i=0;;i++){
        scanf("%d",&n);
        if(n==0) break;
        ans=(n*(n+1)*((2*n)+1))/6;
        printf("%d\n",ans);
    }
    return 0;
}
