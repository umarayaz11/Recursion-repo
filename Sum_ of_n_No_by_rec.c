#include <stdio.h>

int calculateSum(int n) {
    if (n <= 0) {
        return 0;  // Base case: Stop recursion when n is less than or equal to 0
    }
    
    return n + calculateSum(n - 1);  // Recursive call to sum numbers from n-1 to 1
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = calculateSum(n);

    printf("Sum of numbers from 1 to %d is %d.\n", n, sum);

    return 0;
}

