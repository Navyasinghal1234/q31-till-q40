//WAP TO CHECK IF A NUMBER IS A PALINDROME.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

 while (num > 0) {
        digit = num % 10;          // get last digit
        reversed = reversed * 10 + digit;  // build reversed number
        num = num / 10;            // remove last digit
    }

    // check palindrome
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
