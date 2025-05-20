#include<stdio.h>
int main(){
    int i=0;
    char a[50], b[50];
    scanf("%s", a);
    scanf("%s", b);
    while(a[i]!='\0'&& b[i]!='\0' && a[i]==b[i]){
        i++;
    }
    if (a[i]==b[i])
    {
        printf("same");
    }
    else printf("Different");

}
