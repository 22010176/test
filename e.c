#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char a[1000];
  for (int i = 0; i < strlen(a);i++) {
    if (*(a + i) == ' ') {
      *(a + i) = '\n';
      break;
    }
  }
  printf(a);
}