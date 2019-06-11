#include <math.h>
#include <stdio.h>
#include <locale.h>
#include "header_do_while.h"

double sum(int n)
{
    a=0;
    int i = 0;
    do
    {
        a=pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        ++i;
    } while (i < n - 1);
    return a;
}
