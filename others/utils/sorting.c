#include <stdio.h>
int def(int d) {
  return d;
}
void bubbleSort2(int a[][], int len, int func()) {

}
void bubbleSort(int a[], int len, int p()) {
  if (p == NULL) {
    p = def;
  }
  int count = 1, j = 0;
  while (count > 0) {
    count = 0;
    for (int i = 0;i < len - 1 - j;i++) {
      int val = a[i];
      if (p(a[i]) > p(a[i + 1])) {
        ++count;
        a[i] = a[i + 1];
        a[i + 1] = val;
      }
    }
    j++;
  }
}
void insertSort(int a[], int len) {
  for (int i = 0; i < len;i++) {
    int c = a[i];
    for (int j = i; j >= 0;j--) {
      if (j - 1 > 0 && a[j - 1] > c) {
        a[j] = a[j - 1];
        continue;
      }
      if ((j - 1 >= 0 && a[j - 1] < c) || j == 0) {
        a[j] = c;
        break;
      }
    }
  }
}