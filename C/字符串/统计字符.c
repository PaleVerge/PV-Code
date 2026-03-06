//
// Created by rint on 2025/11/26.
//
#include <ctype.h>
#include<stdio.h>
#include<string.h>
int main(void) {
    char str[100];
    int n=0,i=0;
    int digit_n=0,alpha_n=0;

    gets(str);
    n=strlen(str);

    for (i=0;i<n;i++) {
        if (isalpha(str[i])) {
            alpha_n++;
        }
        if (isdigit(str[i])) {
            digit_n++;
        }
    }
    printf("%d %d\n",alpha_n,digit_n);

    return 0;
}