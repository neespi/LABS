#include <math.h>
#include <stdio.h>
#include <locale.h>
#include "header_do_while.h"

int LetsFindFirstNegativeElement(double eps)
{
    n = 1;
    int j;
    int i = 0;
    do
    {
        a = pow(-1, i)*(i + 1) / pow(2, i - 1);
        j = i;
        if (fabs(a) <= eps && a < 0)
        {
            break;
        }
        else
        {
            ++n;
        }
        ++i;
    } while (i < n - 1);
    return j;
}
