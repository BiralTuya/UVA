#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t;
    long a,b,c;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        if((a+b>c) && (b+c>a) && (c+a)>b){
            if(a==b && b==c && c==a)
                printf("Case %d: Equilateral\n",i);
            else if(a!=b && b!=c && c!=a)
                printf("Case %d: Scalene\n",i);
            else if(a==b || b==c || c==a)
                printf("Case %d: Isosceles\n",i);
        }
        else
            printf("Case %d: Invalid\n",i);
    }
    return 0;
}
