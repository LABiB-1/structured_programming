#include <stdio.h>

int main()
{
    int s, h=0, m=0, se=0;
    scanf("%d", &s);
    if (s >= 3600)
    {
        h += s / 3600;
        if (s % 3600 != 0)
        {
            s = s - h * 3600;
            m += s / 60;
            if (m % 60 != 0)
            {
                s = s - m * 60;
                se += s;
            }
        }
    }
    else if (s >= 60)
    {
        m += s / 60;
        if (s % 60 != 0)
        {
            se += s - m * 60;
        }
    }
    else
    {
        se += s;
    }
    printf("%d:%d:%d\n", h, m, se);

    return 0;
}