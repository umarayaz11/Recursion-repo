#include <stdio.h>

int findlcm(int num1, int num2, int lcm) {
    if (lcm % num1 == 0 && lcm % num2 == 0) {
        return lcm;
    }

    return findlcm(num1, num2, lcm + 1);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    int lcm = (num1 > num2) ? num1 : num2;
    int result = findlcm(num1, num2, lcm);

    printf("The LCM of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

