#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int rem[1000];

int main(){
    int i;
    long n=0;
    for(i=0;;i++){
        scanf("%ld",&n);
        if(n==0) break;
        int j=1;
        while(n!=0){
            rem[j]=n%2;
            n=n/2;
            j++;
        }
        int c=0;
        printf("The parity of ");
        int k;
        for(k=j-1;k>=1;k--){
            printf("%d",rem[k]);
            if(rem[k]==1) c++;
        }
        printf(" is %d (mod 2).\n",c);
    }
        return 0;
}
