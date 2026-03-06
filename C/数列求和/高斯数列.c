#include<stdio.h>

int main(void){

    int n,sum;
    while (scanf("%d",&n)!=EOF) {
        sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}