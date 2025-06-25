#include<stdio.h>

int main (){
    int row, column, painted_row , painted_column;
    scanf("%d %d", &row, &column);
    scanf("%d %d", &painted_row, &painted_column);

    int total_cell = row * column;
    int row_colored = column * painted_row;
    int colmn_colored = row * painted_column;
    int double_counted = painted_column * painted_row;
    int colored = (row_colored+colmn_colored) - double_counted;
    int uncoloured = total_cell - colored;
    printf("%d", uncoloured);
    
    return 0;
}