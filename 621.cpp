#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

string a;

int main(){
    int t=0;
    scanf("%d",&t);
    cin.ignore();
    while(t--){
        cin>>a;
        int len=a.length();
        if(a=="1" || a=="4" || a=="78")
            printf("+\n");
        else if(a[len-2]=='3' && a[len-1]=='5')
            printf("-\n");
        else if(a[len-1]=='4' && a[0]=='9')
            printf("*\n");
        else if(a[0]='1' && a[1]=='9' && a[2]=='0')
            printf("?\n");
    }
    return 0;
}
