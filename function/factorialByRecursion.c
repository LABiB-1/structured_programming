#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0)
        return 1;
    else
    factorial(n-1);
        return n;
}
int main(){
    int fact, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
}
