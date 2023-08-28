#include <stdio.h>

int main() {
    int n = 5;  // Number of lines in the pattern

    // Print the increasing pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Print the decreasing pattern
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}