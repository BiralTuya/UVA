#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,a=0,b=0,c=0;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c){
            if(b>c) printf("Case %d: %d\n",i,b);
            else if(c>b) printf("Case %d: %d\n",i,c);
        }
        else if(b>a && b>c){
            if(a>c) printf("Case %d: %d\n",i,a);
            else if(c>a) printf("Case %d: %d\n",i,c);
        }
        else if(c>b && c>a){
            if(b>a) printf("Case %d: %d\n",i,b);
            else if(a>b) printf("Case %d: %d\n",i,a);
        }
    }
    return 0;
}
