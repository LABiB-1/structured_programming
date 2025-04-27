#include<stdio.h>
int main(){
char a[20];
char b[20];
scanf("%s", a);
int i, j;
for(i=0;a[i]!='\0';i++);
for(j=0;j<i;j++){
b[j]=a[j];}
printf("%s", b);}
