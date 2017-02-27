#include<iostream>
#include<cstdio>
using namespace std;

int rem[1000];

int main(){
    long n;
    while(scanf("%ld",&n)!=EOF){
        if(n<0) break;
        int i=0;
        while(n!=0){
            rem[i]=n%3;
            n=n/3;
            i++;
        }
        int j;
        if(i==0) printf("0");
        for(j=i-1;j>=0;j--){
            printf("%d",rem[j]);
        }
        printf("\n");
    }
    return 0;
}
