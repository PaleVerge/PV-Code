#include <stdio.h>
int main(void) {
    double n,x,y;
    scanf("%lf %lf %lf",&n,&x,&y);
    n=n-y/x;
    printf("%d",(int)n);
    return 0;
}