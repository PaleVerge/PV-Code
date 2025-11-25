//
// Created by rint on 2025/11/25.
//
#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",add(a,b));
    return 0;
}
int add(int a,int b) {
    return a+b;
}