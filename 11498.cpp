#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,x=0,y=0;
    int m=0,n=0;
    while(scanf("%d",&t)!=EOF){
        if(t==0) break;
        scanf("%d %d",&m,&n);
        int i;
        for(i=0;i<t;i++){
            scanf("%d %d",&x,&y);
            if(x==m || y==n) printf("divisa\n");
            else if(x>m && y>n) printf("NE\n");
            else if(x<m && y>n) printf("NO\n");
            else if(x<m && y<n) printf("SO\n");
            else if(x>m && y<n) printf("SE\n");
        }
        t=0;
    }
    return 0;
}
