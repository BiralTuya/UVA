#include<iostream>
#include<cstdio>
using namespace std;

void GCD(int n){
    int g=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            g+=GCD(i,j);
            printf("%d\n",g);
        }
    }
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        GCD(n);
    }
    return 0;
}
