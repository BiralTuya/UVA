#include<iostream>
#include<cstdio>
using namespace std;

double x1[12],y1[12],x2[12],y2[12];

int main(){
    char r;
    int i=1,n=1;
    while ( scanf ("%c", &r) && r != '*' ) {
        if ( r != 'r' )
        continue;
        scanf("%lf %lf %lf %lf ",&x1[i],&y1[i],&x2[i],&y2[i]);
        i++;
        n++;
    }
    int j;
    double x,y;
    for(j=1;;j++){
        scanf("%lf %lf",&x,&y);
        if(x==9999.9 && y==9999.9) break;
        int k;int flag=1;
        for(k=1;k<n;k++){
            if(x >x1[k] && x < x2[k] && y < y1[k] && y >y2[k] ){
                printf("Point %d is contained in figure %d\n",j,k);
                flag=0;
            }
        }
            if(flag) printf("Point %d is not contained in any figure\n",j);
    }
    return 0;
}
