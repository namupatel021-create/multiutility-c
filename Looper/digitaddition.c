#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum, i;

    printf("Enter any number: ");
    scanf("%d", &num);



    lastDigit = num % 10;   

    firstDigit = num;
    // dividing single digit
    for (i = num; i >= 10; i = i / 10) {
        firstDigit = i / 10;
    }

    sum = firstDigit + lastDigit;

    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}
