#include<stdio.h>

int main() {
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    switch (x & 1) {

        case 0 : 
        printf("%d is even.", x);
        break;

        case 1 : 
        printf("%d is odd.", x);
        break;
    }
    return 0;
}