#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char str[200];

int main(){
    int c=0;
    while(fgets(str,sizeof(str),stdin)){
        int len=strlen(str);
        int i;
        for(i=0;i<len;i++){
            if(str[i]==' ') c++;
        }
        printf("%d\n",c+1);c=0;
    }
    return 0;
}
