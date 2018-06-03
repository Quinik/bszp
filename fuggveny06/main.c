#include <stdio.h>

int findMin(int[], int);

int main() {
  int c, array[100], size, hely, minimum;

  printf("hany elem van a tombben?\n");
  scanf("%d", &size);

  printf("ird be a %d elemet\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  hely = findMin(array, size);
  minimum  = array[hely];

  printf("Minimum elem helye = %d es erteke = %d.\n", hely + 1, minimum);
  return 0;
}

int findMin(int a[], int n) {
  int c, min, index;

  min = a[0];
  index = 0;

  for (c = 1; c < n; c++) {
    if (a[c] < min) {
       index = c;
       min = a[c];
    }
  }

  return index;
}
