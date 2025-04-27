#include<stdio.h>
int main(){
char a[20];
char ch;
gets(a);
scanf("%c", &ch);
int i, j;
for(i=0;a[i]!='\0';i++);
for(j=0;j<i;j++){
if(a[j]==' '){
a[j]=ch;}}
printf("%s", a);}
