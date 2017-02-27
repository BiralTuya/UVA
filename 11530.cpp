#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char str[120];

int main(){
    int t=0,c=0;
    scanf("%d",&t);
    cin.ignore();
    int i;
    for(i=1;i<=t;i++){
        fgets(str,120,stdin);
        int j;
        for(j=0;j<strlen(str);j++){
            if(str[j]=='a'|| str[j]=='d' || str[j]=='g' || str[j]=='j' || str[j]=='m' || str[j]=='p' || str[j]=='t' || str[j]=='w' || str[j]==' ') c++;
            if(str[j]=='b'|| str[j]=='e' || str[j]=='h' || str[j]=='k' || str[j]=='n' || str[j]=='q' || str[j]=='u' || str[j]=='x') c+=2;
            if(str[j]=='c'|| str[j]=='f' || str[j]=='i' || str[j]=='l' || str[j]=='o' || str[j]=='r' || str[j]=='v' || str[j]=='y') c+=3;
            if(str[j]=='s'|| str[j]=='z') c+=4;
        }
        printf("Case #%d: %d\n",i,c);
        c=0;
    }
    return 0;
}
