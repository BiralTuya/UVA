#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int c=0;
    char str[1000000];
    while(scanf("%c",&str)!=EOF){
        int i=0;
        if(str[i]=='"'){
            c++;
            if(c%2!=0) printf("``");
            else if(c%2==0) printf("''");
        }
        else printf("%c",str[i]);
        i++;
    }
    return 0;
}
