#include <stdio.h>

int main()
{
    int d, y = 0, m = 0, da = 0;
    scanf("%d", &d);
    if (d >= 365)
    {
        y += d / 365;
        if (d % 365 != 0)
        {
            d = d - y * 365;
            m += d / 30;
            if (m % 30 != 0)
            {
                d = d - m * 30;
                da += d;
            }
        }
    }
    else if (d >= 30)
    {
        m += d / 30;
        if (d % 30 != 0)
        {
            da += d - m * 30;
        }
    }
    else
    {
        da += d;
    }
    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", da);

    return 0;
}