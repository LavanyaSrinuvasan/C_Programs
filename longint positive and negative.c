#include <stdio.h>
#include <stdlib.h>

long absolute(long num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

int main() {
    long positiveValue = 10;
    long negativeValue = -20;

    printf("Absolute value of %ld is %ld\n", positiveValue, absolute(positiveValue));
    printf("Absolute value of %ld is %ld\n", negativeValue, absolute(negativeValue));

    return 0;
}
