#include<stdio.h>

int main() {
    char characters[] = {'X', 'M', 'L'};
    printf("Characters in reverse order: ");
    for (int i = 2 ; i >= 0; i--) {
        printf("%c", characters[i]);
    }

    printf("\n");

    return 0;
}
