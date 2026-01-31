//
// Created by rint on 2025/11/26.
//
#include <stdio.h>
int wan(int n) {
    int i=0,sum=0;
    if (n%2==0) {
        for (i=1;i<=n/2;i++) {
            if (n%i==0) {
                sum+=i;
            }
        }
    }else {
        for (i=1;i<=n/2+1;i++) {
            if (n%i==0) {
                sum+=i;
            }
        }
    }
    if (sum==n) {
        return 1;
    }
    return 0;
}
int main(void) {
    int n;
    while (scanf("%d",&n)!=EOF) {
        if (wan(n)) {
            printf("Yes\n");
        }else {
            printf("No\n");
        }
    }
    return 0;
}