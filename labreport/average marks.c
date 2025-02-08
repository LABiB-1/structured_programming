#include<stdio.h>
int main(){
    int a, b, c, d, e, avg;
    printf("Enter your values: ");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);

    avg =(a+b+c+d+e)/5;
    printf("Avarage: %d \n",avg);

    return 0;
}