#include <stdio.h>
#include<stdlib.h>
 
int main() {
    int a, b, c,MaiorAB, M;
    scanf("%d %d %d",&a, &b, &c);
    MaiorAB = (a+b+abs(a-b))/2;
    M = (MaiorAB+c+abs(MaiorAB-c))/2;
    printf("%d eh o maior\n", M);
    return 0;
}