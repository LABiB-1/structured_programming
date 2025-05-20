#include<stdio.h>

    struct student{
        int id;
        char name[50];
        char dept[50];
    }st[50];
int main(){
    scanf("%d %s %s", &st[0].id, st[0].name, st[0].dept);
    printf("%d %s %s", st[0].id, st[0].name, st[0].dept);
}
