//
// Created by rint on 2025/11/26.
//
//
// Created by rint on 2025/11/26.
//
#include <stdio.h>
#include <math.h>
int isprime(int n) {
    int i;
    if (n==1||n==2)
        return 0;
    if(n%2==0) {
        return 0;
    }
    for(i=3;i<=sqrt(n);i+=2) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main(void) {
    int m,n;
    while (scanf("%d",&m)!=EOF){
        if(isprime(m)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}