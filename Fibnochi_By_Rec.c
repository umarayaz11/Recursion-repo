#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case: Return n for n <= 1
    }

    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call to calculate the Fibonacci number
}

void printFibonacciSeries(int count) {
    if (count <= 0) {
        return;  // Base case: Stop recursion when count <= 0
    }

    printFibonacciSeries(count - 1);  // Recursively print the Fibonacci series

    int fibNumber = fibonacci(count - 1);
    printf("%d ", fibNumber);  // Print the Fibonacci number
}

int main() {
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    printFibonacciSeries(num);

    return 0;
}

