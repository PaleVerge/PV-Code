//
// Created by PaleVerge on 2025/11/26.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ishw(char ch[]);

int main() {
    char a[101];
    fgets(a, sizeof(a), stdin);
    if (ishw(a)) {
        printf("Yes\n");
    }else {
        printf("N0\n");
    }
    return 0;
}
int ishw(char ch[]) {
    int len=(int)strlen(ch);

    if (len>0 && ch[len-1]=='\n') {
        ch[len-1]='\0';
        len--;
    }
    int i=0,j=len-1;
    while (i<=j) {
        if (toupper(ch[i])!=toupper(ch[j])) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

