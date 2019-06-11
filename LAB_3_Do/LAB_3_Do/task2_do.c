#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_do.h"

double sum2(double eps)
{
    a = eps + 1.0;
    s = 0.0;
     int i = 0;
    while (fabs(a) > eps)
    {
        a=pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        s += a;
        ++i;
    }
    return (s);
}
