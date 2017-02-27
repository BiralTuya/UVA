#include<iostream>
#include<cstdio>
#include<clocale>
using namespace std;

int main(){
    int t;
    double v,av;
    scanf("%d",&t);
    setlocale(LC_ALL,"en_US.UTF-8");
    int i;
    for(i=1;i<=t;i++){
        int j;
        for(j=0;j<12;j++){
            scanf("%lf",&v);
            av+=v;
        }
        printf("%d $%'.2lf\n",i,av/12.0);
        av=0;
    }
    return 0;
}
