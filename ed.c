#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
void printVect(float a[]) {
  printf("%lf,%lf\n", a[0], a[1]);
}
void vect(float c[], float a[], float b[]) {
  c[0] = a[0] - b[0];
  c[1] = a[1] - b[1];
}
void mulVect(float c, float a[], float b[]) {
  for (int i = 0; i < 2;i++) {
    *(b + i) = *(a + i) * c;
  }
}
char triangle(int r) {
  char result[1000][1000];
  float height = (r * pow(3, 0.5) / 2);
  float a[3][2] = { { 0,height },{ r,height },{ 0,r / 2 } };
  float b[3][2];
  vect(*b, *a, *(a + 1));
  vect(*(b + 1), *(a + 1), *(a + 2));
  vect(*(b + 2), *(a + 2), *a);

  for (int i = 0;i < r;i++) {
    float factions = i * r / height;
    float c[2]; mulVect(factions, *b, c);
    printVect(c);
  }

}
int main() {
  triangle(5);
}