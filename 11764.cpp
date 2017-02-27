#include<iostream>
#include<cstdio>
using namespace std;

int a[55];

int main(){
    int t=0,n=0,h=0,l=0;
    scanf("%d",&t);
    for(int p=1;p<=t;p++){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]) l++;
            else if(a[j]<a[j+1]) h++;
        }
        printf("Case %d: %d %d\n",p,h,l);
        h=0;l=0;
    }
    return 0;
}
