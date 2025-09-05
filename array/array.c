#include <stdio.h>

int main() {
    int mark[3];
    for (int i = 0; i < 3; i++){
       printf("Enter %d student mark: ", i+1);
       scanf("%d", &mark[i]);

    }

    for (int i = 0; i < 3; i++){
        printf("%d no student got marks: ", i+1);
    }
    
    return 0;
}