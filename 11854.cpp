#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int A[3];

int main(){
    int a,b,c,l=0,r=0;
    while(EOF){
        int i;
        for(i=0;i<3;i++){
            scanf("%d",&A[i]);
        }
        if(A[0]==0 && A[1]==0 && A[2]==0) break;
        sort(A,A+3);
        l=(A[0]*A[0])+(A[1]*A[1]);
        r=A[2]*A[2];
        if(l==r) printf("right\n");
        else printf("wrong\n");
        l=0;r=0;
    }
    return 0;
}
