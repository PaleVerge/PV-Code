//
// Created by ritno on 2025/11/21.
//
#include <stdio.h>
#include <math.h>

int main () {
    long long n,res;
    scanf("%lld",&n);
    while (n>0) {
        long long a;
        scanf("%lld",&a);
        int base=a%10;
        int exponent = (int)(a% 4);
        if (exponent == 0) {
            exponent = 4;
        }
        int res = 1;
        for (int i = 0; i <exponent;i++) {
            res = (res*base) % 10;
        }
        n--;
        printf("%d\n",res);
    }

    return 0;
}