#include<iostream>
#include<cstdio>
using namespace std;

char str[1000000];

int main(){
    while(fgets(str,sizeof(str),stdin)){
        printf("%s",str);
    }
    return 0;
}
