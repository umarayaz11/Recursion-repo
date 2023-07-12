#include <stdio.h>

int reverseNumber(int num) {
    static int reversed = 0;

    if (num == 0) {
        return 0;
    }

    reversed = (reversed * 10) + (num % 10);
    reverseNumber(num / 10);

    return reversed;
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int reversedNum = reverseNumber(num);

    printf("The reversed number is: %d\n", reversedNum);

    return 0;
}


