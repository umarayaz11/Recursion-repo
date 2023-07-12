#include <stdio.h>

int findGcd(int num) {
    static int c = 1, a = 0;
    if (num <= 0) {
        return a;
    }
    return findGcd(num / 2);
    a = a + (num % 2) * c;
    c *= 10;
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int gcd = findGcd(num);

    printf("The binary representation is: %d\n", gcd);

    return 0;
}

