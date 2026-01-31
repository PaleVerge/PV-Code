#include <stdio.h>
#include <math.h>

int prime(int n){
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n > 2 && n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int count =4;
    for (int i=200;i<=300;i++){
        if (prime(i)==1){
            count++;
            if (count % 5==0){
                printf("\n");
                printf("%d",i);
            }else{
                printf(",%d",i);
            }
        }
    }
    return 0;
}