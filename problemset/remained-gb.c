#include<stdio.h>
int main(){
    
    int month, limit;
    scanf("%d %d", &limit, &month);
    int remained = 0;
    for (int i = 1; i <= month; i++){
        int used;
        scanf("%d", &used);

        int month_limit = limit + remained;
        remained = month_limit - used;  
    }
    int final_limit = limit + remained;
    printf("%d\n", final_limit);
    
    
    return 0;
}