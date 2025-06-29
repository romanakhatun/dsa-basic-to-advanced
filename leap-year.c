#include<stdio.h>
#include<stdbool.h>

int main(){
     int year;
     scanf("%d", &year);
     bool is_leap_year = (year % 4 == 0) && (year % 100 != 0 || year % 400 ==0);

     if (is_leap_year ){
        printf("%d lear year", year);
     }
     else{
        printf("%d Not leap year", year);
     }
     
    return 0;
}