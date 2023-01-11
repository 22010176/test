#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int solve(int a[], int len) {
  int e[len][2];
  // printf("%d\n", len);
  for (int i = 0; i < len;i++) {
    e[i][0] = a[i];
    e[i][1] = abs(a[i] % 2 - 1);
  }
  int f = 0, exit = 0;
  while (exit != 1) {
    ++f;
    for (int i = 0;i < len;i++) {
      // printf("%d: %d %d\n", i, e[i][0], e[i][1]);
      int b = e[i][0];
      e[i][0] = b / 2;
      // printf("af: %d %d\n%d _____________________\n", i, e[i][0], e[i][1], f);
      if (e[i][0] % 2 == e[i][1]) {
        exit = 1;
        break;
      }
    }

  }
  // free(e);
  return f;
}

int main() {
  int test;
  scanf("%d", &test);

  int result[test];
  for (int i = 0; i < test;i++) {
    int len, sum = 0;
    scanf("%d", &len);
    int a[len];
    for (int j = 0;j < len;j++) {
      scanf("%d", &a[j]);
      sum += a[j];
    }
    if (sum % 2 == 0) {
      result[i] = 0;
      continue;
    }
    result[i] = solve(a, len);
  }
  for (int i = 0; i < test;i++) {
    printf("%d\n", result[i]);
  }
}