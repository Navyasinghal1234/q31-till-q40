//WAP to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;   // not prime
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
