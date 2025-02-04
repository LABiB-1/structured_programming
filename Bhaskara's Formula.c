#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, sq, R1, R2;
    scanf("%f %f %f", &a, &b, &c);

    sq = b * b - 4 * a * c;
    if (sq >= 0 && a != 0)
    {
        R1 = (-b + sqrt(sq)) / (2 * a);
        R2 = (-b - sqrt(sq)) / (2 * a);

        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }
    else printf("Impossivel calcular\n");

    return 0;
}