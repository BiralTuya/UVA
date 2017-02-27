#include<iostream>
#include<cstdio>
using namespace std;

int a[10000];

int main(){
    int n=0,i=0,c=0,d=0,j=0;
    for(j=1;;j++){
        scanf("%d",&n);
        if(n==0) break;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>0) c++;
            else if(a[i]==0) d++;
        }
        printf("Case %d: %d\n",j,c-d);
        c=0;d=0;
    }
    return 0;
}
