#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, a100, a50, a20, a10, a5, a2, a1;
    scanf("%d", &a);
    a100=a/100;
    b=a%100;
    a50=b/50;
    c=b%50;
    a20=c/20;
    d=c%20;
    a10=d/10;
    e=d%10;
    a5=e/5;
    f=e%5;
    a2=f/2;
    g=f%2;
    a1=g;
    printf("%d\n",a);
    printf("%d nota(s) de R$ 100,00\n", a100);
    printf("%d nota(s) de R$ 50,00\n", a50);
    printf("%d nota(s) de R$ 20,00\n", a20);
    printf("%d nota(s) de R$ 10,00\n", a10);
    printf("%d nota(s) de R$ 5,00\n", a5);
    printf("%d nota(s) de R$ 2,00\n", a2);
    printf("%d nota(s) de R$ 1,00\n", a1);

    return 0;
}