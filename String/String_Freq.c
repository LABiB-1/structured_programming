#include<stdio.h>

int main(){
char a[20];
char ch;
gets(a);
printf("Enter a character: ");
scanf("%c",&ch);
int i, j, count=0;
for(i=0;a[i]!='\0';i++);
for(j=0;j<i;j++){
if(a[j]== ch){
count++;}}
printf("%d", count);
}
