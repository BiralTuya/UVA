#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a[10]={6,35,204,1189,6930,40391,235416,1372105,7997214,46611179};
    int b[10]={8,49,288,1681,9800,57121,332928,1940449,11309768,65918161};
    int i;
    for(i=0;i<10;i++){
        printf("%10d%10d\n",a[i],b[i]);
    }
    return 0;
}