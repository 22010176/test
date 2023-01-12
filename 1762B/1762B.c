#include <stdio.h>
#include <math.h>
#include "../utils/sorting.c"

void solve() {
  int length;
  scanf("%d", &length);
  int c[length][2];
  for (int i = 0; i < length;i++) {
    scanf("%d", &c[i][1]);
    c[i][0] = i;
  }
  // bubbleSort(c, length, test);
  for (int i = 0;i < length;i++) {
    printf("%d %d\n", c[i][0], c[i][1]);
  }
}

int main() {
  solve();
}