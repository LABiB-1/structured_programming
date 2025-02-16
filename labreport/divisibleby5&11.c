#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n%5==0 && n%11==0){
        printf("Divisible by 5 and 11");
    }
    else{
        printf("Not Divisible by 5 and 11");
    }
    return 0;
}