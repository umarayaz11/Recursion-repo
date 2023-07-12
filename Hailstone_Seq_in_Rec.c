#include <stdio.h>

void hailstoneSequence(int n) {
    printf("%d ", n);  // Print the current number

    if (n == 1) {
        return;  // Base case: Stop recursion when the number reaches 1
    }

    if (n % 2 == 0) {
        hailstoneSequence(n / 2);  // If the number is even, divide it by 2
    } else {
        hailstoneSequence(3 * n + 1);  // If the number is odd, multiply it by 3 and add 1
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Hailstone sequence: ");
    hailstoneSequence(num);

    return 0;
}

