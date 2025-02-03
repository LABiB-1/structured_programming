#include <stdio.h>
 
int main() {
    char nam[10];
    double fs,ts, total;
    scanf("%s %lf %lf",&nam, &fs, &ts);
    total = (fs+ts*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}