#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void solve(char a[]) {

}
int main() {
  int* a[10]; // list of pointers

  for (int i = 0; i < 10;i++) {
    int b[i];
    *(a + i) = b;
    printf("%lld\n", **(a + i));
  }
  printf("Hello world");

}