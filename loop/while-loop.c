#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  /*
    output:
    Need more money: Enter Amount:-25
    Your Current Money: 25
    Need more money: Enter Amount:-25
    Your Current Money: 50
  */
  int money = 0;
  int target = 50;
  while (target > money) {
    printf("Need more money: Enter Amount:-");
    int giveMoney;
    scanf("%d", &giveMoney);
    // money = money + giveMoney;
    money += giveMoney;
    printf("Your Current Money: %d\n", money);
  }

  /*
   output:
   1234
   digit: 4, x: 123
   digit: 3, x: 12
   digit: 2, x: 1
   digit: 1, x: 0
   digit sum:10
   Reversed:4321
  */
  int x;
  scanf("%d", &x);
  int sum = 0;
  int reversed = 0;
  while (x > 0) {
    int digit;
    digit = x % 10;
    x /= 10;
    sum += x;
    reversed = reversed * 10 + digit;
    printf("digit: %d, x: %d\n", digit, x);
  }
  printf("digit sum:%d\n", sum);
  printf("Reversed:%d\n", reversed);

  /*
   GCD Rules:
   a    b    remainder
   30   42      12
   12   30       6
   6    12       0
   0     6       0
  */
  int a, b;
  scanf("%d %d", &a, &b);

  while (a != 0) {
    int remainder = b % a;
    b = a;
    a = remainder;
    printf("a: %d, b:%d\n", a, b);
  }
  printf("%d", b);

  /*Guessing Random Number Game*/
  srand(time(0));
  int randomNum = rand() % 100 + 1;
  printf("%d", randomNum);
  int number_of_guesses = 0;
  
  while (number_of_guesses < 5) {
    int guess;
    scanf("%d", &guess);
    
    if (guess == randomNum) {
      printf("You are right");
      break;
    } else if (guess > randomNum) {
      printf("guess smaller\n");
    } else {
      printf("guess larger\n");
    }
    number_of_guesses++;
  }
  
  if (number_of_guesses == 5) {
    printf("You'r failed");
  }

  return 0;
}