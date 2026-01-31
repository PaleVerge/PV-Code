#include<stdio.h>
#include<math.h>

int main(void) {
    int count = 0;
    double H, S_1, V, L, K, n;
    scanf("%lf %lf %lf %lf %lf %lf", &H, &S_1, &V, &L, &K, &n);
    double time_fall = sqrt((H - K) / 5);
    double x_fall = V * time_fall;
    double x_start = S_1 - x_fall;
    double x_end = x_start + L;

    for (int i = 0; i < n; i++) {
        double ball_pos = i;
        if (ball_pos >= x_start && ball_pos <= x_end) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}