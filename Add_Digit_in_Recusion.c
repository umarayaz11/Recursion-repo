#include <stdio.h>#include <stdio.h>

int addDigits(int num) {
    if (num <= 0) {
        return num;
    }
    return addDigits(num / 10) + (num % 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = addDigits(num);
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}


