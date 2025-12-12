/
// Created by rint on 2025/11/25.
//
#include <stdio.h>
int fib(int n) {
    int f1=1,f2=1,f3;
    if(n==1 || n==2) {
        return 1;
    }else {
        for (int i = 3; i <= n; i++) {
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        return f3;
    }
}
int main(void) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        printf("%8d ",fib(i));
    }
    return 0;
}
