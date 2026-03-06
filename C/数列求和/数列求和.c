#include <stdio.h>
int main(void)
{
    int n;
    int i;
    scanf("%d", &n);
    double sum=1.00;
    if (n==0){
        sum=0.00;
    }else{
        for (i=2;i<=n;i++){
            double mum=2*i-2;
            double son=2*i-3;
            if (i%2==0){
                sum+=son/mum;
            }else{
                sum-=son/mum;
            }
        }
    }
    printf("%.2f",sum);
    return 0;
}