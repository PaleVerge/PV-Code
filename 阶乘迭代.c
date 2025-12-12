#include <stdio.h>
//
// Created by ritno on 2025/11/28.
//
int fact2(int n) {
    if (n == 0)
        return 1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += fact2(n - 1);
    }
    return count;
}
int main(void) {
    int n;
    scanf("%d",&n);
    printf("%d",fact2(n));
    return 0;
}