#include <stdio.h>
#include <stdlib.h>

long absolute(long num) {
    if (num < 0) {
        return -num; // returns negative of negative value entered thus making it positive
    } else {
        return num; // returns the same positive value
    }
}

int main() {
    long a = 10;
    long b = -20;

    printf("Absolute value of %ld is %ld\n", a, absolute(a)); //number greater than 0 so returns as it is
    printf("Absolute value of %ld is %ld\n", b, absolute(b)); //number less than 0 so returns negative of the number thus making it positive

    return 0;
}
