#include<stdio.h>

int main (){
    int num1, num2, result;
    char op;
    scanf("%d %c %d", &num1, &op, &num2);

    /*
        if (op == '+'){
        result = num1 + num2;
        }
        else if(op == '-'){
            result = num1 - num2;    
        }
        else if(op == '*'){
            result = num1 * num2;
        }
        else if(op == '/'){
            result = num1 / num2;
        }
        printf("%d",result);
    */

    switch (op)
    {
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
    case '%':
        printf("%d", num1%num2);
        break;   
    default:
       printf("Unknown operator");
       break; 
    }

    
    return 0;
}