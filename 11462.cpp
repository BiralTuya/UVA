#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int a[2000006];

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        int i;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a, a+i);
        int j;
        for(j=0;j<n;j++){
            printf("%d",a[j]);
            if(j==(n-1)) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
