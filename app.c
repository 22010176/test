#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
  int a[127] = { 0 };
  char b[10000];
  gets(b);
  for (int i = 0; i < 300;i++) {
    a[(int)b[i]]++;
  }
  for (int i = 1; i < 127;i++) {
    int b = *(a + i);
    if (b == 0) continue;
    printf("%c: %lld\n", i, b);
  }
}