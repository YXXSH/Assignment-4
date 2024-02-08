#include<stdio.h>

float calculateInterest(int score, float currentBalance) {
    float interestRate;

    if(score < 600) {
        interestRate = 0.15;
    } else if (score>=600 && score<=750) {
        interestRate = 0.12;
    } else {
        interestRate = 0.10;
    }

    float interest = currentBalance * interestRate;
    return interest;
}

int main() {
    int score;
    float currentBalance;

    printf("Enter your credit score: ");
    scanf("%d", &score);

    printf("Enter your current balance: ");
    scanf("%f", &currentBalance);
    
    float interestAmount = calculateInterest(score, currentBalance);
    printf("The calculated interest on the current balance is : %.2f\n", interestAmount);

    return 0;
}