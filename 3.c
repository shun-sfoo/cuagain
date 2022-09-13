// PROGRAM 3
#include <stdio.h>
int main(void) {
  int arr[] = {10, 20};
  int *p = arr;
  *p++ = 6;
  int t = *--p;

  printf("arr[0] = %d, arr[1] = %d, t = %d *p = %d", arr[0], arr[1], t, *p);
  return 0;
}
