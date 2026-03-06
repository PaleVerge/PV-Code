//
// Created by rint on 2025/11/26.
//
#include <stdio.h>
int power(int x,int y) {
    int i=0,res=1;
    while(i++<y) {
        res*=x;
    }
    return res;
}
int main(void) {
    int m,n;
    while (scanf("%d%d",&m,&n)!=EOF){
        printf("%d\n",power(m,n));
    }
    return 0;
}