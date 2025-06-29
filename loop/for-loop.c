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

  /*
   //EX: Nested for-loop =>
    ******
    *    *
    *    *
    *    *
    *    *
    ******
  */
  int width, height;
  scanf("%d %d", &width, &height);

  for(int i=0; i<width; i++){
    printf("*");
  }
  printf("\n");

  for(int i=0; i < height; i++){
    printf("*");
     for (int j = 0; j < width-2; j++){
        printf(" ");
     }
    printf("*");
    printf("\n");
  }

  for(int i=0; i<width; i++){
    printf("*");
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

  // Find divisor
  int dividend;
  scanf("%d", &dividend);

  int count =0;
  for (int i = 1; i <= dividend; i++){
    if(dividend%i == 0){
      printf("%d ", i);
      count++;
    }
  }
  printf("\nNumber of divisor:%d",count);

  // SUM
  int sum1 = 0;
    for (int i = 0; i <= 100; i++){
        sum1 += i;
    }
    printf("%d",sum1);

    int sum2 = 0;
    for (int i = 100; i >= 0; i--)
    {
        sum2 += i;
    }
    printf("%d", sum2);

   // 50 + 49 + 48 + 47 + …… ( প্রথম ২০টি পদ)
    int sum = 0;
    for(int i=50, j=1; j<=20; j++, i--){
       sum +=i;
    }
    printf("%d", sum);

    //2 + 5 + 8 + 11 + 14 + …..   (প্রথম ১০টি পদ)
    for(int i=2, j=1; j<=10; j++, i+=3){
        sum += i;
    }
    printf("%d", sum);
    
  return 0;
}