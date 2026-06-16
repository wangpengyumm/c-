#include <stdio.h>

void decimalToOctal(int num) {
    if (num >= 8) {
        decimalToOctal(num / 8);
    }
    printf("%d", num % 8);
}

int main() {
    int num;
    printf("Enter a positive decimal integer: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Please enter a positive integer!\n");
        return 1;
    }
    
    printf("Octal: ");
    decimalToOctal(num);
    printf("\n");
    
    return 0;
}