#include <stdio.h>
 
int main() {
    int st, ap, d;
    float fn;
    scanf("%d %d", &st, &ap);
    d = st*ap;
    fn =d/12.0;
    printf("%.3f\n",fn);
    return 0;
}