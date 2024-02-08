#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter a three digit number: ");
    scanf("%d", &x);

    int check;
    if(x<100 || x>999){
        check = 0;
    } else {
        check = 1;
    }

    while(check == 0) {
        printf("incorrect input.\nEnter a three digit number: ");
        scanf("%d", &x);

        if(x<100 || x>999){
        check = 0;
        } else {
        check = 1;
        }
    }

    int originalNumber = x;
    int sum = 0;

    for(int i=0; i<3; i++) {
        int digit = x % 10;
        sum += pow(digit, 3);
        x /= 10;
    }
   
   if(sum == originalNumber){
    printf("%d is an Armstrong number.\n", originalNumber);
   } else {
    printf("%d is not an Armstrong number.\n", originalNumber);
   }

   return 0;
}