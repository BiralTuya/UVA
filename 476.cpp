#include<iostream>
#include<cstdio>
using namespace std;

double x1[12],y1[12],x2[12],y2[12];

int main(){
    char r;
    int i;
    for(i=1;;i++){
        scanf("%c %lf %lf %lf %lf",&r,&x1[i],&y1[i],&x2[i],&y2[i]);
        if(r=='*') break;
    }
    int j;
    double x,y;
    for(j=1;;j++){
        scanf("%lf %lf",&x,&y);
        if(x==9999.9 && y==9999.9) break;
        int k;
        for(k=1;k<=i;k++){
            if((x>x1[k] && x<x2[k]) && (y>y1[k] && y<y2[k])){
                printf("Point %d is contained in figure %d\n",j,k);
            }
            else
                printf("Point %d is not contained in any figure\n",j);

        }
    }
    return 0;
}
