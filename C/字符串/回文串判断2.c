//
// Created by rint on 2025/11/26.
//
//
// Created by rint on 2025/11/26.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int ishw(char str[]) {
    int count=0;
    const size_t len=strlen(str);
    int i=0,j=len-2;
    for (i=0;i<len;i++) {
        str[i]=toupper(str[i]);
    }
    for (int i=0;i<len;i++) {
        for (j=len-1; j>0; j--) {
            if (str[i]==str[j]) {
                count++;
            }
        }
    }
    if (len%2==0) {
        if (count==len/2)
            return 1;
    }else {
        if (count==(len+1)/2)
            return 1;
    }
    return 0;
}
int main(void) {
    char str[100];
    fgets(str,sizeof(str),stdin);
    if (ishw(str)) {
        printf("Yes");
    }else {
        printf("No");
    }
    return 0;
}