#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int a[12];

int main(){
    int t;scanf("%d",&t);
    int i,p=0,ans=0;
    for(i=1;i<=t;i++){
        int n;scanf("%d",&n);
        int j;
        for(j=1;j<=n;j++){
            scanf("%d",&a[j]);
        }
        p=(n/2)+1;
        ans=a[p];
        printf("Case %d: %d\n",i,ans);
        ans=0;p=0;
    }
    return 0;
}
