#include<stdio.h>
#include<math.h>
int main(){
    int n, s=0, i=0, sum=0;
    printf("Enter value:");
    scanf("%d", &n);
    while(i<n){
        s = pow(10, i)+s;
        sum = sum+s;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}