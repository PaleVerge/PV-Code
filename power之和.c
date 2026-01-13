//
// Created by rint on 2025/12/1.
//
#include <stdio.h>
int power(int x,int y){
    int res=1;
    for(int i=0;i<y;i++){
        res*=x;
    }
    return res;
}
int sop(int n,int k) {
    int sum=0;
    for(int i=1;i<=n;i++) {
        sum+=power(i,k);
    }
    return sum;
}
int main(void) {
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%d",sop(n,k));
    return 0;
}