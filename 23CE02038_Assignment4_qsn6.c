#include<stdio.h>

int main() {
    int a, b, result;
    char operator;

    //Input two integers and operator from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    //perform calculation based on operator
    switch(operator) {
        case '+' : 
            result = a+b;
            break;
        case '-' : 
            result = a-b;
            break;
        case '*' :
            result = a*b;
            break;
        case '/' : 
            result = a/b;
            break;
        default : 
            printf("Error: Invalid Operator.\n");
            return 1;              
    }

    //display the result
    printf("Result: %d %c %d = %d\n", a, operator, b, result);

    return 0;
}