/*链接：https://ac.nowcoder.com/acm/contest/117136/1042
来源：牛客网

珂朵莉想每天都给威廉送礼物，于是她准备了n个自己的本子

她想送最多的天数，使得每天至少送一个本子，但是相邻两天送的本子个数不能相同

珂朵莉最多送几天礼物呢
输入描述:

第一行一个整数n

输出描述:

第一行输出一个整数，表示答案*/
#include <stdio.h>
int main(void)
{
    int n, day = 0, books = 0;

    scanf("%d", &n);

    while (1)
    {
        day++;
        if (day % 2 != 0)
        {
            books += 1;
        }
        else
        {
            books += 2;
        }
        if (books > n)
        {
            day--;
            break;
        }
    }
    printf("%d", day);
    return 0;
}