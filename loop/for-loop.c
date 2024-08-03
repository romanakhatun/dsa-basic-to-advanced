#include <stdio.h>
int main() {
  // Common area
  int n, row, col;
  printf("Enter Number of line:");
  scanf("%d", &n);

  /*
    1
    1 2
    1 2 3
  */
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%d ", col);
    }
    printf("\n");
  }

  /*
    1 2 3
    1 2
    1
  */
  for (row = n; row >= 1; row--) {
    for (col = 1; col <= row; col++) {
      printf("%d ", col);
    }
    printf("\n");
  }

  /*
   1
   1 2
   1 2 3
   1 2
   1
  */
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%d ", col);
    }
    printf("\n");
  }

  for (row = n - 1; row >= 1; row--) {
    for (col = 1; col <= row; col++) {
      printf("%d ", col);
    }
    printf("\n");
  }

  /*
    1
   12
  123
  */
  for (row = 1; row <= n; row++) {
    // printing space
    for (col = 1; col <= n - row; col++) {
      printf(" ");
    }

    // printing number
    for (col = 1; col <= row; col++) {
      printf("%d", col);
    }
    printf("\n");
  }

  /*
      1
     12
    123
     12
      1
  */
  for (row = 1; row <= n; row++) {
    // printing space
    for (col = 1; col <= n - row; col++) {
      printf(" ");
    }
    // printing number
    for (col = 1; col <= row; col++) {
      printf("%d", col);
    }
    printf("\n");
  }

  for (row = n - 1; row >= 1; row--) {
    // printing space
    for (col = 1; col <= n - row; col++) {
      printf(" ");
    }
    // printing number
    for (col = 1; col <= row; col++) {
      printf("%d", col);
    }
    printf("\n");
  }

  /*
   *
   * *
   * * *
   * * * *
   * * * * *
   */
  for (row = 1; row <= n; row++) {
    // printing space
    for (col = 1; col <= n - row; col++) {
      printf(" ");
    }
    // printing number
    for (col = 1; col <= row; col++) {
      printf("* ");
    }
    printf("\n");
  }

  /*
        *

      * * *

    * * * * *
  */
  for (row = 1; row <= n; row++) {
    // printing space
    for (col = 1; col <= n - row; col++) {
      printf(" ");
    }
    // printing number
    if (row % 2 != 0) {
      for (col = 1; col <= row; col++) {
        printf("* ");
      }
    }

    printf("\n");
  }

  // continue statement
  for (int i = 1; i <= 10; i++) {
    if (i % 2 != 0)
      continue;
    printf("%d\n", i);
  }
  printf("\n");
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}