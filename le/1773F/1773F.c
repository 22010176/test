#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
  int matches, goals, loses;
  scanf("%d%d%d", &matches, &goals, &loses);
  if (matches == 1) {
    if (goals == loses) {
      printf("1\n%d:%d", goals, loses);
      return 0;
    }
    printf("0\n%d:%d", goals, loses);
    return 0;
  }
  int count = matches - (goals + loses);
  if (count > 0) {
    printf("%d\n", count);
    for (int i = 0; i < count;i++) printf("0:0\n");
    for (int j = 0, i = 0;j < goals || i < loses;j++, i++) {
      if (j < goals) printf("1:0\n");
      if (i < loses) printf("0:1\n");
    }
    return 0;
  }
  if (count <= 0) {
    printf("%d\n", 0);
    int c = matches - 1 - !!loses; // 5 - 1 - 1 = 3
    int a = c < goals ? c : goals; // 3 < 3 ? 3 : 3(*)
    for (int i = 0; i < a;i++) { // i < 3
      printf("1:0\n");
      goals--;
    }
    if (goals > 0) printf("%d:0\n", goals); // goals = 0 = False
    for (int i = 0; i < matches - a - 1 - !!goals;i++) { // 5 - 3 - 1 - 0 = 1(goals == 0)
      printf("0:1\n");
      loses--;
    }
    if (loses > 0) printf("0:%d", loses); // lose
    return 0;
  }
}