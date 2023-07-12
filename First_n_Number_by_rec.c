#include <stdio.h>

void printNumbers(int n) {
    if (n <= 0) {
        return;  // Base case: Stop recursion when n is less than or equal to 0
    }
    
    printNumbers(n - 1);  // Recursive call to print numbers from n-1 to 1
    printf("%d ", n);     // Print the current number
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are: ", n);
    printNumbers(n);
    printf("\n");

    return 0;
}

