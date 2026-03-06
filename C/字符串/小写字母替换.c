//
// Created by rint on 2025/11/26.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void) {
    char str[101];
    int len,i;
    while (gets(str)!=NULL) {
        len=strlen(str);
        for (i=0;i<len;i++) {
            if (isalpha(str[i]) && str[i]>80) {
                printf("*");
            }else {
                printf("%c",str[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}