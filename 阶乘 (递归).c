//
// Created by rint on 2025/11/25.
//
#include <stdio.h>
int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
int main() {
    double res;
    int k,m,n;
    while (scanf("%d%d%d",&k,&m,&n)!=EOF) {
        res = (double)fact(k) / (fact(m) + fact(n));
        printf("%.6lf\n",res);
    }
    return 0;
}