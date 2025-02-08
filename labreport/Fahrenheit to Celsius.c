#include<stdio.h>
int main(){
    int c, f;
    printf("Enter temperature value in Fahrenheit: ");
    scanf("%d",&f);

    c = (f-32)*5/9;
    printf("Temperature value in celsius: %d C\n",c);

    return 0;
}