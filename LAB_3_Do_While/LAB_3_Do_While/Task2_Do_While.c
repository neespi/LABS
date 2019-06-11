#include <math.h>
#include <stdio.h>
#include <locale.h>
#include "header_do_while.h"

double sum2(double eps)
{
    a=0;
    n=1;
    int i = 0;
    do
    {
        a=a+pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        if (fabs(a) <= eps)
            n = n - 1;
        else
            ++n;
        ++i;
    } while (i < n - 1);
    return a;
}

