#include <stdio.h>
#include <string.h>

char solve() {
  int b;
  scanf("%d", &b);
  scanf("\n");
  char a[100];
  scanf("%s", a);
  for (int i = 1; i < b;i += 3) {
    if (i + 1 == b || *(a + i) != *(a + i + 1)) {
      return 'N';
    }
  }
  return 'Y';
}
int main() {

  int test;
  scanf("%d", &test);
  char a[200];
  for (int i = 0; i < test;i++) {
    *(a + i) = solve();
  }
  for (int i = 0; i < strlen(a);i++) {
    char c = *(a + i);
    if (c == 'Y') printf("YES\n");
    if (c == 'N') printf("NO\n");
  }
}