#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    int a,b,c=0,r=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0 && b==0) break;
        int i;
        for(i=a;i<=b;i++){
            r=sqrt(i);
            //cout<<r<<endl;
            if(r*r==i) c++;
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}
