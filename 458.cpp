#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char str[1000];

int main(){
    while(fgets(str,sizeof(str),stdin)){
        int len=strlen(str);
        int i;
        for(i=0;i<len-1;i++){
            printf("%c",str[i]-7);
        }
        printf("\n");
    }
    return 0;
}
