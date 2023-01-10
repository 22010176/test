#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char c[1000];
  gets(c);
  for (int i = 0; i < strlen(c);i++) {
    if (*(c + i) != ' ')printf("%c", *(c + i));
    else {
      printf("\n");
    }
  }
}