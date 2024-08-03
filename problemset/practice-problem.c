#include <stdbool.h>
#include <stdio.h>

int main() {
  //== type conversion explisive
  int num1 = 75;
  int num2 = 4;
  double division = (double)num1 / (double)num2;
  printf("%d / %d = %lf", num1, num2, division);

  //== practice problem
  printf("Enter Radius:");
  double radius;
  scanf("%lf", &radius);

  // bitter poridi or perimiter: 2* Pi * r;
  // bitter ketrofol or area: pi * r^2;

  const double PI = 3.1416;
  double perimiter = 2 * PI * radius;
  double area = PI * radius * radius;
  printf("Perimiter: %.2lf \n Area: %.2lf ", perimiter, area);

  //== practice problem
  int height;
  printf("Enter height is inches:");
  scanf("%d", &height);
  double inch_to_ft = height / 12;
  int height_remainder = height % 12;

  printf("feet:%d Inches:%d", (int)inch_to_ft, height_remainder);

  /* ==== MODULE 3.5 problemest === */

  //== prb 1
  printf("Name   :Alexandra Abramov\n");
  printf("DOB    :July 14, 1975\n");
  printf("Mobile :99-9999999999");

  //==prb 2
  /*
  int value1, value2;
  printf("Input the first integer:");
  scanf("%d", &value1);
  printf("Input the second integer:");
  scanf("%d", &value2);
  printf("Product of the above two integers: %d", value1 * value2);
  */

  // prb 3
  int value1, value2;
  printf("first number:");
  scanf("%d", &value1);
  printf("second number:");
  scanf("%d", &value2);

  printf("sum:%d\n", value1 + value2);
  printf("difference:%d\n", value1 - value2);
  printf("Product:%d\n", value1 * value2);
  printf("Quotient:%d\n", value1 / value2);
  printf("modulus:%d\n", value1 % value2);

  //==prb 4
  double principle, time, rate;

  printf("Enter principle:");
  scanf("%lf", &principle);

  printf("Enter Time:");
  scanf("%lf", &time);

  printf("Enter Rate:");
  scanf("%lf", &rate);

  double simple_interest = principle * time * rate / 100;
  printf("Simple Interest = %lf\n", simple_interest);

  printf("Principle + Interest= %.1lf", principle + simple_interest);

  //== prb 5
  double number;
  printf("Enter Number:");
  scanf("%lf", &number);
  int integer_part = (int)number;
  printf("integer part: %d\n", integer_part);
  double real_part = number - integer_part;
  printf("real part: %.3lf", real_part);

  //== prb 6
  int hrs, salary_hr;
  printf("Input the working hrs:");
  scanf("%d", &hrs);

  printf("Salary amount/hr:");
  scanf("%d", &salary_hr);

  printf("Salary = %.2lf", (double)hrs * (double)salary_hr);

  //== prb 7
  int celcius;
  printf("Enter temperature in Celsius = ");
  scanf("%d", &celcius);
  double celcius_to_farenhite = (celcius * 9 / 5) + 32;
  printf("Farehite Value: %.1lf", celcius_to_farenhite);

  //== prb 8
  int fahrenheit;
  printf("Temperature in fahrenheit= ");
  scanf("%d", &fahrenheit);
  double fahrenheit_to_celcius = (fahrenheit - 32) * 5 / 9;
  printf("Temperature in celsius = %.2lf C", fahrenheit_to_celcius);

  //// GRADE CHECKER
  int number_of_subject;
  scanf(" %d", &number_of_subject);

  bool failed = false;

  int total_points = 0;
  for (int i = 1; i <= number_of_subject; i++) {
    printf("\n");

    int marks, grade_points;
    printf("Enter marks:");
    scanf(" %d", &marks);

    if (marks >= 80) {
      printf("A+ \n");
      grade_points = 5;
    } else if (marks >= 70) {
      printf("A \n");
      grade_points = 4;
    } else if (marks >= 60) {
      printf("B \n");
      grade_points = 3;
    } else if (marks >= 50) {
      printf("C \n");
      grade_points = 2;
    } else if (marks >= 40) {
      printf("D \n");
      grade_points = 1;
    } else {
      printf("F \n");
      grade_points = 0;
      failed = true;
    }
    total_points += grade_points;
    printf("Grade Point: %d\n", grade_points);
  }

  if (failed) {
    printf("YOU HAVE FAILED. GPA:0.0");
  } else {
    double gpa = (double)total_points / (double)number_of_subject;
    printf("Avarage Grade:%.1lf", gpa);
  }

  //==prb
  int num;
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("even number");
  } else {
    printf("odd number");
  }

  return 0;
}