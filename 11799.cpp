#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,n=0,max=-9999,a=0;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        int j;
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(a>max) max=a;
        }
        printf("Case %d: %d\n",i,max);
        max=-9999;
    }
    return 0;
}
