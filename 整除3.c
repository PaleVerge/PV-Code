//
// Created by rint on 2025/11/21.
//
#include<stdio.h>

long long fun(int n){
    long long n0=7,n1=11,n2;
    if(n==0) {
        return 7;
    }else if(n==1) {
        return 11;
    }
    for(int i=1;i<n;i++){
        n2=n0+n1;
        n0=n1;
        n1=n2;
    }
    return n2;
}
int main(void) {
    int n;
    while(scanf("%d",&n)!=EOF) {
        if(fun(n)%3==0){
            printf("yes");
        }else{
            printf("no");
        }
    }
    return 0;
}