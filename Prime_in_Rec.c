#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n, int count) {
    if (count == 1) {
        return true;
    }

    if (n % count == 0) {
        return false;
    }

    return isPrime(n, count - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num, num /2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
