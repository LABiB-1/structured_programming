#include <stdio.h>
 
int main() {
    int pc1,pn1, pc2, pn2;
    float p1p, p2p, pay;
    scanf("%d%d%f", &pc1, &pn1, &p1p);
    scanf("%d%d%f", &pc2, &pn2, &p2p);
    pay = (pn1*p1p+pn2*p2p);
    printf("VALOR A PAGAR: R$ %.2f\n", pay);
    return 0;
}