#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_do.h"

int LetsFindFirstNegativeElement(double eps)
{
    int i = 0;
    while (i > -1)
    {
        a=pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        if (fabs(a) <= eps && a < 0.0)
        {        ++i;
        }
        
    }
    return(i + 1);
}
