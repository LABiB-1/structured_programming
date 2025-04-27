#include<stdio.h>
int main(){
char a[20];
scanf("%s", a);
int i, j, num=0, alpha=0, spec=0;
for(i=0;a[i]!='\0';i++);
for(j=0;j<i;j++){
if(a[j]>='0'&&a[j]<='9'){
num++;}
else if((a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')){
alpha++;}
else
spec++;
}
printf("Numbers: %d\n alphabets: %d\nSpecial Characters: %d", num, alpha, spec);}
