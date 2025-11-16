//WAP TO FIND THE 1's COMPLEMENT OF A BINARY NUMBER AND PRINT IT
#include <stdio.h>

int main() {
    int num, digit, comp = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;      // extract last digit

        if (digit == 0)
            comp = comp + (1 * place);
        else
            comp = comp + (0 * place);

        place = place * 10;    // shift place value
        num = num / 10;        // remove last digit
    }

    printf("1's Complement = %d", comp);

    return 0;
