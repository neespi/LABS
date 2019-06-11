#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_for.h"
int LetsFindFirstNegativeElement(double eps)
{
    for (int i = 0; ; ++i)
    {
        a = pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        if (fabs(a) <= eps && a < 0)
        {
            return(i + 1);
        }
    }
}
