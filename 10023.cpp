#include<iostream>
#include<cstdio>
#include<string>
#include<math.h>
#include<cmath>
#include<string.h>
#include<cstdlib>
using namespace std;

char a[1000000],c[1000000];

int main(){
    int t;
    long double x,y;
    scanf("%d",&t);
    cin.ignore();
    while(t--){
        gets(a);
        x=atoi(a);
        y=sqrt(x);
        //cout<<y<<endl;
        itoa(y,c,10);
        puts(c);
    }
    return 0;
}
