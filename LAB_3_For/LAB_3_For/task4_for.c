#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_for.h"

int LetsFindFirstElement(double eps)
{
    n=-1;
    for (int i = 0; ; ++i)
    {
        a = pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        if (fabs(a) <= eps)
        {
            n = i + 1;
            break;
        }
    }
    return(n);
}
