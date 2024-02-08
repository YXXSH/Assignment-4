#include<stdio.h>

int main() {
    int age, price;
    printf("Enter the age: ");
    scanf("%d", &age);

    switch(0<age && age<5 ? 1 : 5<=age && age<=12 ? 2 : 13<=age && age<=59 ? 3 : age>=60 ? 4 : 0) {
        case 1: 
        price = 0;
        printf("Ticket price is Rs.%d", price);
        break;

        case 2 : 
        price = 20;
        printf("Ticket price is Rs.%d", price);
        break;

        case 3 : 
        price = 50;
        printf("Ticket price is Rs.%d", price);
        break;

        case 4 : 
        price = 50 - (0.2*50);
        printf("Ticket price is Rs.%d", price);
        break;

        default: 
        printf("Enter the correct age.");
    }

    return 0;
}