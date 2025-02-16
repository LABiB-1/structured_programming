#include <stdio.h>

int main() {
    float A, B, C, a=2, b=3, c=5, i;
    scanf("%f\n%f\n%f", &A, &B, &C);
    i=(A*a+B*b+C*c)/(a+b+c);
    printf("MEDIA = %.1f\n", i);

    return 0;
}