#include<stdio.h>
int main(){
    //Water poured bottle 2 --> 1
    int A, B, C;
    scanf("%d %d %d", &A,&B, &C);

    int water_left = A - B;
    if (water_left >= C){
       printf("0");
    }
    else{
        C -= water_left;
        printf("%d", C);
    }
    // or
    int water_poured = water_left < C ? water_left : C  ;
    
    C -= water_poured;
    printf("%d", C);

    return 0;
}