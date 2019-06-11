#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_for.h"

void print(int n, int k)
{
    for (int i = 0; i < n; ++i)
    {
        a = pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        if ((i + 1) % k == 0)
        {
            continue;
        }
        printf("%.2lf\n", a);
        printf("\n\n");
    }
}
