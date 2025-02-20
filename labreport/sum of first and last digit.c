#include <stdio.h>
int main() {
    int n, num, fd, ld, sum;
    printf("Enter a number:");
    scanf("%d", &n);
    num =n;
    while (n>=10)
    {
        n =n/10;
    }
    fd = n;
    ld = num%10;
    sum = fd+ld;
    printf("Sum = %d\n", sum);
    return 0; 
}