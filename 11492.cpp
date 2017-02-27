#include<iostream>
#include<cstdio>
using namespace std;

int a[15];

int main(){
    int t=0,c=0,d=0,e=0;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(t--){
        int i;
        for(i=0;i<10;i++){
            scanf("%d",&a[i]);
        }
        int j;
        for(j=0;j<9;j++){
            if(a[j]>a[j+1]) c++;
            else if(a[j]<a[j+1]) d++;
        }
        if(c==9 || d==9) printf("Ordered\n");
        else printf("Unordered\n");
        //cout<<c<<endl;
        //cout<<d<<endl;
        //cout<<e<<endl;
        c=0;d=0;e=0;
    }
    return 0;
}
