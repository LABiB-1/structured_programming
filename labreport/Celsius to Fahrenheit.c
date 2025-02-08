#include<stdio.h>
int main(){
    int c, f;
    printf("Enter temperature value in celsius: ");
    scanf("%d",&c);

    f = (9*c/5)+32;
    printf("Temperature value in Fahrenheit: %d F\n",f);

    return 0;
}