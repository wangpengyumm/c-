#include <stdio.h>

void findNarcissisticNumbers() {
    printf("Narcissistic numbers (100-999):\n");
    for (int num = 100; num <= 999; num++) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;
        int sum = hundreds * hundreds * hundreds + tens * tens * tens + units * units * units;
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

void findPrimeNumbers(int n) {
    printf("Prime numbers (2-%d):\n", n);
    for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

void fibonacci(int n) {
    printf("Fibonacci sequence (%d terms):\n", n);
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

int main() {
    int choice, n;
    
    while (1) {
        printf("\n===== Menu =====\n");
        printf("1. Find Narcissistic Numbers\n");
        printf("2. Find Prime Numbers\n");
        printf("3. Fibonacci Sequence\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                findNarcissisticNumbers();
                break;
            case 2:
                printf("Enter upper limit n: ");
                scanf("%d", &n);
                findPrimeNumbers(n);
                break;
            case 3:
                printf("Enter number of terms: ");
                scanf("%d", &n);
                fibonacci(n);
                break;
            case 4:
                printf("Exit program\n");
                return 0;
            default:
                printf("Invalid choice, try again\n");
        }
    }
    
    return 0;
}