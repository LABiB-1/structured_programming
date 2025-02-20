#include <stdio.h>
int main() {
    int n, r, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;
        if(r==0){
            a++;
        }
        else if(r==1){
            b++;
        }
        else if(r==2){
            c++;
        }
        else if(r==3){
            d++;
        }
        else if(r==4){
            e++;
        }
        else if(r==5){
            f++;
        }
        else if(r==6){
            g++;
        }
        else if(r==7){
            h++;
        }
        else if(r==8){
            i++;
        }
        else if(r==9){
            j++;
        }
        
        n= n/10;
    }
    printf("0:%d\n", a);
    printf("1:%d\n", b);
    printf("2:%d\n", c);
    printf("3:%d\n", d);
    printf("4:%d\n", e);
    printf("5:%d\n", f);
    printf("6:%d\n", g);
    printf("7:%d\n", h);
    printf("8:%d\n", i);
    printf("9:%d\n", j);

    return 0;
}