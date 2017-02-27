#include<iostream>
#include<cstdio>
using namespace std;

int p[100];

int main(){
    int n=0,num=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        int i;
        int max=-9999;
        int min=9999;
        for(i=0;i<num;i++){
            scanf("%d",&p[i]);
            if(p[i]>max) max=p[i];
            if(p[i]<min) min=p[i];
        }
        int parking=0;
        parking=(max-min)*2;
        printf("%d\n",parking);
        parking=0;
    }
    return 0;
}
