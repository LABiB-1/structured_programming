#include <stdio.h>
 
int main() {
    float A, B, C, tr, ci, tra, qu, re;
    scanf("%f %f %f",&A,&B,&C);
    tr = 0.5*A*C;
    ci = 3.14159*C*C;
    tra = 0.5*(A+B)*C;
    qu = B*B;
    re = A*B;
    printf("TRIANGULO: %.3f\n",tr);
    printf("CIRCULO: %.3f\n",ci);
    printf("TRAPEZIO: %.3f\n",tra);
    printf("QUADRADO: %.3f\n",qu);
    printf("RETANGULO: %.3f\n",re);
 
    return 0;
}