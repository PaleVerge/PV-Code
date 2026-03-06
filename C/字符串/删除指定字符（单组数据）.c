//
// Created by rint on 2025/11/26.
//
#include<stdio.h>
#include<string.h>
int main(void) {
    char str[100];
    char del;
    int len,i;
    scanf("%s ",str);
    scanf("%c",&del);
    len=strlen(str);
    for (i=0;i<len;i++) {
        if(str[i]==del)
            continue;
        printf("%c",str[i]);
    }
    return 0;
}
