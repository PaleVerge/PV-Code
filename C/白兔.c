#include <stdio.h>
#include <math.h>

/**
 * @brief 检查一个数是否能表示为 base^exp 而不溢出。
 * @param base 底数。
 * @param exp 指数。
 * @param n 目标值。
 * @return 如果 base^exp 等于 n，返回 1，否则返回 0。
 */
int is_power(long long base, int exp, long long n)
{
    long long result = 1;
    for (int i = 0; i < exp; i++)
    {
        // 在乘法前检查潜在的溢出
        // 这可以防止数字溢出后回绕
        if (n / base < result)
        {
            return 0;
        }
        result *= base;
    }
    return result == n;
}

int main()
{
    long long n;
    // 读取输入数字 n
    scanf("%lld", &n);

    // 用基础情况 (p=n, k=1) 初始化最大和
    long long max_sum = n + 1;

    // 遍历 k 的所有可能值
    // k 的最大可能值大约是 log2(10^18)，约为 ~60
    for (int k = 2; k <= 60; k++)
    {
        // 使用浮点数数学找到 p 的候选值，
        // 然后四舍五入到最近的整数。
        long long p_candidate = (long long)round(pow(n, 1.0 / k));

        // p 必须至少为 2
        if (p_candidate < 2)
        {
            break;
        }

        // 检查候选 p 的 k 次幂是否恰好等于 n
        if (is_power(p_candidate, k, n))
        {
            // 如果这是一个有效的对，更新最大和
            if (p_candidate + k > max_sum)
            {
                max_sum = p_candidate + k;
            }
        }
    }

    // 打印最终的最大和
    printf("%lld\n", max_sum);

    return 0;
}
