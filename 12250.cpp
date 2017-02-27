#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

//char str[200];

int main(){
    string str="";
    int i;
    for(i=1;;i++){
        cin>>str;
        //fgets(str,sizeof(str),stdin);
        if(str=="#") break;
        if(str=="HELLO") printf("Case %d: ENGLISH\n",i);
        else if(str=="HOLA") printf("Case %d: SPANISH\n",i);
        else if(str=="HALLO") printf("Case %d: GERMAN\n",i);
        else if(str=="BONJOUR") printf("Case %d: FRENCH\n",i);
        else if(str=="CIAO") printf("Case %d: ITALIAN\n",i);
        else if(str=="ZDRAVSTVUJTE") printf("Case %d: RUSSIAN\n",i);
        else printf("Case %d: UNKNOWN\n",i);
        }
        return 0;
}

