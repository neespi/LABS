#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_do.h"

void print(int n, int k)
{
    {
        int i = 0;
        while (i < n)
        {
            a=pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
            if ((i + 1) % k == 0)
            {
                ++i;
                continue;
            }
            ++i;
            printf("%.2lf\n", a);
        }
    }
}
