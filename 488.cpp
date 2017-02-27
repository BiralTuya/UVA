#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    const char *a[]={"1","22","333","4444","55555","666666","7777777","88888888","999999999"};
    int t=0,l=0,n=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&l);
        scanf("%d",&n);
        for(int i=1;i<n;i++){
            int j;
            for(j=0;j<l;++j){
                printf("%s\n",a[j]);
            }
            int k;
            for(k=j;k>=0;--k){
                printf("%s\n",a[k]);
            }
        }
    }
    return 0;
}
