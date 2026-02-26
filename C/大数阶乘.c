//
// Created by rint on 2025/11/21.
//
#include <math.h>
#include <stdio.h>
int main(void) {
  int n, m;
  double res;
  scanf("%d", &n);
  while (n--) {
    res = 1;
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
      res += log10(i);
    }
    printf("%d\n", (int)res);
  }
  return 0;
}