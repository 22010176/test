#include <math.h>
#include <stdio.h>
#include <iostream>
void solve(long long b) {
  double s = sqrt(b);
  double s2 = sqrt(s);
  if (floor(s) != s || floor(s2) == s2 || (int)s % 2 == 0) {
    printf("1NO\n");
    return;
  }
  for (int i = 3; i < floor(s2) + 1;i += 2) {
    if (b % i == 0) {
      printf("2NO\n");
      return;
    }
  }
  printf("YES\n");
}
int main() {
  long long length;
  scanf("d", &length);

  int result[length];
  for (int i = 0; i < length;i++) {
    long long num;
    std::cin >> num;
    if (num == 1) {
      printf("NO\n");
    }
    else if (num == 4) {
      printf("YES\n");
    }
    else solve(num);
  }
}