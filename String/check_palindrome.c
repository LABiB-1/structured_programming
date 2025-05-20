#include<stdio.h>
int main(){
    int i=0, j=0, k;
    char a[50], b[50];
    scanf("%s", a);
    for(j=0;a[j]!='\0';j++);
    j--;
    for(k=0;j>=0;k++){
        b[k]=a[j];
        j--;
    }
    b[k]='\0';
    
    while(a[i]!='\0'&& b[i]!='\0' && a[i]==b[i]){
        i++;
    }
    if (a[i]==b[i])
    {
        printf("palindrome");
    }
    else printf("Not palindrome");

}
