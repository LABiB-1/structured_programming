#include<stdio.h>
int reverse(char *a){
    if(*a!='\0')
    reverse(a+1);
    printf("%c", *a);
    return 0;
}
int main(){
    char a[50];
    scanf("%s", a);
    reverse(a);
}
