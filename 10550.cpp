#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=0,b=0,c=0,d=0,degree=0;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)!=0){
        degree=(1080+(120+a-2*b+2*c-d)*9);
        printf("%d\n",degree);
    }
    return 0;
}
