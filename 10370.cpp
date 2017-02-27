#include<iostream>
#include<cstdio>
using namespace std;

int a[1010];

int main(){
    int c;
    scanf("%d",&c);
    while(c--){
        int sum=0,p=0;
        double avg,ans;
        int n;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        //cout<<sum<<endl;
        avg=(double)(sum/n);
        //cout<<avg<<endl;
        int j;
        for(j=0;j<n;j++){
            if(a[j]>avg) p++;
        }
        //cout<<p<<endl;
        //cout<<n<<endl;
        ans=(double)p/(double)n;
        printf("%.3lf",ans*100);
        printf("%c\n",37);
        avg=0;ans=0;sum=0;p=0;

    }
    return 0;
}
