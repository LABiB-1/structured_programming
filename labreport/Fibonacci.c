#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next_term = 0;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Fibonacci Series: %d %d ", a, b);

    next_term = a + b;
    while (next_term < limit) {
        printf("%d ", next_term);
        a = b;
        b = next_term;
        next_term = a + b;
    }

    printf("\n");
    return 0;
}