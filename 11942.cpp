#include<iostream>
#include<cstdio>
using namespace std;

int v[15];

int main(){
    int t=0,flag=0;
    scanf("%d",&t);
    while(t--){
int i;
for(i=0;i<10-1;i++)
{ if(v[i]>v[i+1])continue; // why one more counter when we already have one? the variable i?
else
break; // if order is not followed, why to continue with check for remaining elements?
}
if(i==10-1)
{
cout<<"ordered"<<endl;
return 0; // Array proved a descending array, so there is not chance of being it ascending. Let's end function here.
}
else cout<<"unordered"<<endl;
for(i=0;i<10-1;i++)
{
 if(v[i]<v[i+1])continue; // why one more counter when we already have one? the variable i?
 else
break; // if order is not followed, why to continue with check for remaining elements?
}
if(i==10-1)cout<<"ordered"<<endl;
else cout<<"unordered"<<endl;
}
return 0;
}
