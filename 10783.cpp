#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,a=0,b=0,sum=0;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        int j;
        for(j=a;j<=b;j++){
            if(j%2!=0) sum+=j;
        }
        printf("Case %d: %d\n",i,sum);sum=0;
    }
    return 0;
}
