//
// Created by rint on 2025/11/26.
//
#include <ctype.h>
#include<stdio.h>
#include<string.h>
int main(void) {
    char str[210];
    char a;
    int len,i,count,N;
    scanf("%d ",&N);
    while (N--) {
        count=0;
        scanf("%s ",str);
        scanf("%c",&a);
        len=strlen(str);
        for (i=0;i<len;i++) {
            if (str[i]==a) {
                count++;
            }
        }
        printf("%d\n",count);
    }


    return 0;
}