#include <stdio.h>
 
int main() {
    int num, wh;
    float aph, salary;
    scanf("%d %d %f", &num, &wh, &aph);
    salary=wh*aph;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}