#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        int notAdvertise, advertise, costAdvertise;
        scanf("%d %d %d", &notAdvertise, &advertise, &costAdvertise);

        int revenueAdvertise = advertise - costAdvertise;
        if(revenueAdvertise > notAdvertise){
            printf("advertise");
        }
        else if(revenueAdvertise < notAdvertise){
            printf("do not advertise");
        }
        else{
            printf("does not matter");
        }
        printf("\n");
    }
    
    return 0;
}