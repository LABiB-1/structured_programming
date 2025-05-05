#include<stdio.h>
int num(int n){
    if(n!=0){
        num(n-1);
        printf("%d\n", n);}
        return n;
}
int main(){
    int number, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    number = num(n);
}
