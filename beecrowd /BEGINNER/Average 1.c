#include <stdio.h>
 
int main() {
    float A, B, a=3.5, b=7.5, c;
    scanf("%f\n%f", &A, &B);
    c=(A*a+B*b)/(a+b);
    printf("MEDIA = %.5f\n", c);
 
    return 0;
}