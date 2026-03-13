#include <stdio.h>

int gcd(int a,int b){
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(void){
    int a,b;
    int res;
    scanf("%d%d",&a,&b);
    printf("%#d %#x %#o",gcd(a,b),gcd(a,b),gcd(a,b));   //以十进制、十六进制和八进制输出最大公约数

    return 0;
}
