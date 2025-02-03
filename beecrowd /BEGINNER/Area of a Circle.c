#include <stdio.h>
 
int main() {
    const double PI = 3.14159; 
    double R, A;              
    scanf("%lf", &R);

    A = PI * R * R;
    printf("A=%.4lf\n", A);

    return 0;
}