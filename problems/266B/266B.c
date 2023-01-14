#include <stdio.h>

int main() {
  int len, time;
  scanf("%d %d", &len, &time);
  scanf("\n");
  char ce[len];
  gets(ce);
  for (int i = 0; i < time;i++) {
    for (int j = 0; j < len - 1;j++) {
      // printf("%c\n", ce[j]);
      if (ce[j] == 'B' && ce[j + 1] == 'G') {
        ce[j] = 'G';
        ce[++j] = 'B';
      }
    }
  }
  printf(ce);
}