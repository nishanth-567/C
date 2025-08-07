#include <stdio.h>

int main() {
    double num, guess;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Can't find square root of a negative number.\n");
        return 1;
    }

    guess = num / 2;

    for (int i = 0; i < 10; i++) {
        guess = (guess + num / guess) / 2;
    }

    printf("Square root of %.2f is %.2f\n", num, guess);

    return 0;
}

