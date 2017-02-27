#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,m=0;
    while(scanf("%d %d",&m,&n)!=EOF){
        printf("%d\n",(m*n)-1);
    }
    return 0;
}
