#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char c[1000];
  char d[1000][1000];
  char h[1000];
  gets(c);

  char f[1000];
  int g = 0;
  for (int i = 0, j = 0; i < strlen(c);i++, j++) {
    if (c[i] != ' ') f[j] = c[i];
    if (c[i] == ' ' || i + 1 == strlen(c)) {
      strcpy(d[g], f);
      memset(f, 0, sizeof(f));
      g++;
      j = -1;
    }
  }
  for (int i = g - 1; i >= 0;i--) {
    printf("%s ", d[i]);
  }
  // for (int i = 0; i < e;i++) {
  //   printf("%s ", **(d + i));
  // }
}