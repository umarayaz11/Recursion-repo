#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: Return 1 for n = 0 or n = 1
    }

    return n * factorial(n - 1);  // Recursive call to calculate the factorial
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("Factorial of %d is %d.\n", num, result);
    }

    return 0;
}

