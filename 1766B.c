#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int solve() {
  int length, count = 0;
  char a[10000];
  scanf("%d\n", &length);
  gets(a);
  int len = strlen(a);
  length -= len;
  if (len == 1 && length == 1) return 0;
  // if (length > 0) return 1;
  for (int i = 0; i < len;i++) {
    char b = *(a + i);
    int index = 0;
    for (int j = 1;j < len - i;j++) {


    }

  }
  return length > 0;
}
int main() {
  int test;
  scanf("%d", &test);
  int answer[1000]; // array of 1000 address
  for (int i = 0; i < test;i++) {
    *(answer + i) = solve();
  }
  for (int i = 0;i < test;i++) {
    printf("%d\n", *(answer + i));
  }
}