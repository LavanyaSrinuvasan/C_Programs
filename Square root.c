#include <stdio.h>
#include <math.h>

int main() {
    double number, square_root;

    printf("Enter a number: ");
    scanf("%lf", &number);

    square_root = sqrt(number);

    printf("The square root of %lf is %lf\n", number, square_root);

    return 0;
}
