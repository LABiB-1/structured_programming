#include <stdio.h>
 
int main() {
    int R;
    double V, pi=3.14159, a=(4.0/3);
    scanf("%d",&R);
    
    V=a*pi*R*R*R;
    printf("VOLUME = %.3lf\n", V);
    return 0;
}