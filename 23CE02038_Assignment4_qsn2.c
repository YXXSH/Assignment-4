#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d", &b);

    printf("Enter the third number: \n");
    scanf("%d", &c);

    switch(a > b && a > c ? 1 : (b > a && b > c ? 2 : 3)) {
        case 1: 
        printf("%d is the largest among them.", a);
        break;

        case 2: 
        printf("%d is the largest among them.", b);
        break;

        case 3: 
        printf("%d is the largest among them.", c);
        break;
    }
    return 0;
}