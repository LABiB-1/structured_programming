#include<stdio.h>
int main(){
    int i, j;
    char a[50], b[50];
    scanf("%s", a);
    scanf("%s", b);
    for(i=0;a[i]!='\0';i++);

    for(j = 0;b[j] != '\0';j++){
        a[i+j]=b[j];
    }
  
    a[i+j]='\0';
    printf("%s", a);
}
