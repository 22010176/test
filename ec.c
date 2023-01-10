#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char b[1000];
  char c[1000];
  gets(b);
  strrev(b);
  for (int i = 0;i < strlen(b);i++) {
    char d = *(b + i);
    if (d == ' ') break;
    printf("%c.%lld\n", d, &d);
    *(c + i) = d;
    *(b + i) = ' ';
  }
  strrev(b);
  strrev(c);
  printf("%s \n%s", c, b);
}