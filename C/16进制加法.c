//
// Created by ritno on 2025/11/21.
//
#include<stdio.h>
#include<stdlib.h>

int main(void) {
    long long a,b;
    while (scanf("%llx%llx",&a,&b)!=EOF) {
        long long sum = a + b;
        if (sum<0) {
            printf("-");
            printf("%llx\n",llabs(sum));
        }else {
            printf("%llx\n",sum);
        }

    }
    return 0;
}