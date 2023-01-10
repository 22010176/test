#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int solve() {
  // int length, count = 0;
  char testing[10000];
  // scanf("%d\n", &length);
  gets(testing);
  int len = strlen(testing);
  printf("%d\n", len);
  // if (len == 1 && length == 1) return 0;
  // if (length > len) return 1;
  int operationSave = 0;
  int isTracking;
  for (int i = 0; i < len;i++) {
    printf("_________________________________\n");
    isTracking = 0;
    char current = *(testing + i);
    for (int j = i + 1;j < len + 1;j++) {
      printf("%c", *(testing + j - i));
    }
    // printf("\n");
  }
  // return length > 0;
}
int main() {
  solve();
}