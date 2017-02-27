#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=0,b=0,n=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else if(a==b) printf("=\n");
    }
    return 0;
}
