//
// Created by rint on 2025/11/21.
//
#include <stdio.h>
int main(void){
    int n,start,N,current;
    scanf("%d",&N);
    while(N--) {
        int count=0;
        scanf("%d %d",&start,&n);
        current=start;
        while (count<n) {
            if ((current%4==0 && current%100!=0) || current%400==0) {
                count++;
            }
            if (count==n) {
                printf("%d\n",current);
                break;
            }
            current++;
        }
    }
    return 0;
}