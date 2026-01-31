//
// Created by rint on 2025/11/25.
//

#include <stdio.h>
int root(int n) {
    int sum=0;
    while (n) {
        sum += n%10;
        n/=10;
    }
    return sum;
}
int main(void) {
    int n;
    while (scanf("%d", &n)==1) {
        printf("%d\n",root(n));
    }


    return 0;
}
