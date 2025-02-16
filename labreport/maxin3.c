#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d is the maximum", a);
    }
    else if(b>c){
        printf("%d is the maximum", b);
    }
    else{
        printf("%d is the maximum", c);
    }
    return 0;

}