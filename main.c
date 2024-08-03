#include <stdbool.h>
#include <stdio.h>

int main(void) {

  //== variable_types
  int fraction = 1.275;
  printf("%d \t", fraction); //\t vertically space create

  float fraction1 = 3.5;
  printf("%f\t", fraction1);

  double fraction2 = fraction1 * 3;
  printf("%lf\n", fraction2);

  char charactar = 'a'; // just use for show one character
  printf("%c\n", charactar);

  //== input and output
  int math_marks;
  int english_marks;

  printf("Math Marks:");
  scanf("%d", &math_marks);

  printf("English Marks:");
  scanf("%d", &english_marks);

  printf("Total Marks:%d\n", math_marks + english_marks);

  //== 4 arithmetic operators
  int num1, num2;

  printf("Enter Two Number:");
  scanf("%d %d", &num1, &num2);

  int addition = num1 + num2;
  printf("%d + %d = %d\n", num1, num2, addition);

  int substraction = num1 - num2;
  printf("%d - %d = %d\n", num1, num2, substraction);

  int multiplication = num1 * num2;
  printf("%d * %d = %d\n", num1, num2, multiplication);

  int division = num1 / num2;
  printf("%d / %d = %d\n", num1, num2, division);

  int remainder = num1 % num2;
  printf("%d %% %d = %d\n", num1, num2, remainder);

  //== assignment operators: value change
  int price = 75;
  price += 25; // price = price + 25;
  printf("%d\t", price);

  //== increament & decrement oparators
  int price2 = 20;
  price2++; // ager jei value er 1 barabe
  price2--; // ager jei value er 1 komabe
  printf("%d", price2);

  //== Type Conversion Implisive
  int integer_num = 10;
  double floating_num = integer_num;
  printf("Integer:%d \t Floating: %lf", integer_num, floating_num);

  //== Type Conversion Explisive
  double floating_number = 76.125;
  // convert floating num to integer num
  printf("Interger Number: %d", (int)floating_number);

  /*
   //== if else statement
   int marks;
   scanf("%d", &marks);
   if(marks >=40 ){
     printf("You have passed in the exam");
   }
   else{
     printf("Alas!");
   }

   //== Absolute Number
   int num;
   scanf("%d", &num);
   if(num < 0){
     num = -1* num;
     printf("Absolute Number:%d", num);
   }

   //== Booleans
   bool condition = true;
   printf("%d", condition);

   //== Vowel or Consonant Check
   char ch;
   scanf("%c",&ch);

   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
       printf("vowel");
   }
   else{
     printf("consonant");
   }

 //== Leap YEAR Check
 int year = 2100;
 bool is_leap_year=(year%4 == 0) && (year%100 !=0 || year%400 == 0);
 if(is_leap_year){
     printf("leap year");
 }else{
     printf("not leap year");
 }

 // 2020 => Leap Year -> divisible by 4;
 // 2100 => Not Leap year -> Not divisible by 100
 // 2000 => leap year -> divisible by 400

 //== Calculator prb
   int num1, num2;
   char op; //Arithmatic operator
   scanf("%d %c %d", &num1, &op, &num2);

   if(op == '+'){
       printf("%d", num1+num2);
   }
   else if(op == '-'){
       printf("%d", num1-num2);
   }
    else if(op == '*'){
       printf("%d", num1*num2);
   }
    else if(op == '/'){
       printf("%d", num1/num2);
   }
  // multipul condition er every single condition er akta statement use korar
 jonne normally switch case use kora hoi

  switch(op){
      case '+':
        printf("%d", num1+num2);
        break;
      case '-':
        printf("%d", num1-num2);
        break;
      case '*':
        printf("%d", num1*num2);
        break;
      case '/':
        printf("%d", num1/num2);
        break;
      default:
        printf("Invalid opearator");
        break;
  }


  //== absolute value check
  int num, abs;
  scanf("%d", &num);

  if(num >=0){
      abs = num;
  }
  else{
      abs = -num;
  }
  printf("%d", abs);
  // ai kaj tai ternary operator use kore easily kora jai

  // Ternary Operator : condition ? true : false
  int num, abs;
  scanf("%d", &num);
  abs = (num >=0 ? num : -num);
  printf("%d", abs);

  //== sum using for loop
  int n,  sum = 0;
   scanf("%d",&n);
   for(int i = 1; i<=n; i++){
       sum += i;
       printf("i = %d, sum = %d \n", i, sum);
   }
   printf("outside loop sum: %d\n", sum);

   //== star pattern
   int n;
   scanf("%d",&n);
   printf("***************\n");

   for(int i=1; i<=n; i++){
       printf("*             *\n");
   }
   printf("***************\n");

   //== number decrease => n to 0
   int n;
   scanf("%d",&n);

   for(int i=n; i>=0; i--){
       printf("%d\n", i);
   }

   ////////////////////
   int width, height;
   scanf("%d %d", &width, &height);

   for(int i=0; i<width; i++){
       printf("*");
   }
   printf("\n");

   for(int i=0; i<height-2; i++ ){
       printf("*");
       for(int j=0; j<width-2; j++){
           printf(" ");
       }
       printf("*");
       printf("\n");
   }

   for(int i=0; i<width; i++){
       printf("*");
   }

   output:
   ****
   *  *
   *  *
   ****

  //==even odd check
  for(int i=1; i<10; i++){
    if(i%2==0){
        printf("%d is odd \n", i);
    }else{
        printf("%d is even\n", i);
    }
  }

  //prb 7, 8: Find largest value
  int a, b;
  scanf("%d %d", &a, &b);
  if(a>b){
      printf("A:%d",a);
  }
  else{
      printf("B:%d",b);
  }
  //using ternary operator
  int greater_value = (a>b? printf("A\n") : printf("B\n"));

  //prb 6
  int num;
    scanf("%d",&num);

    if(num>0){
        printf("1");
    }
    else if(num == 0){
        printf("0");
    }
    else{
        printf("-1");
    }
  //// prb 9:b
  int n = 4;
  for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
          printf("*");
      }
      printf("\n");
  }

  ////prb 9:c
  int num = 5;
  int cur = 1;
  for(int i=1; i<=num; i++){
      for(int j=1; j<=i; j++){
          printf("%d ", cur);
          cur++;
      }
      printf("\n");
  }

  */

  return 0;
}
