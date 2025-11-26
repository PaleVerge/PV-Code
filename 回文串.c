//
// Created by rint on 2025/11/26.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int ishw(char str[]);

int main(void) {
    char str[110];

    fgets(str,sizeof(str),stdin);

    if (ishw(str)) {
        printf("Yes");
    }else {
        printf("No");
    }

    return 0;
}

int ishw(char str[]) {
    int len = (int)strlen(str);
    if (len>0 && str[len-1]=='\n') {
        str[len-1] = '\0';
        len--;
    }

    int i=0,j=len-1;

    while (i < j) {
        if (toupper(str[i]) != toupper(str[j])) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}