#include <stdio.h>
#include <math.h>
int main() {
    int n, num, fd, ld, ren, c=0, m;
    printf("Enter a number:");
    scanf("%d", &n);
    num =n;
    while (n>=10)
    {
        n =n/10;
        c++;
    }
    fd = n;
    ld = num%10;
    m = num-(fd*pow(10,c)+ld);
    ren =ld*pow(10,c)+m+fd;
    printf("Swap Number:%d\n", ren); 
    return 0; 
}