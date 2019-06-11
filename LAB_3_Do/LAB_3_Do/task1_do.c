#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_do.h"

double sum(int n)
{
    a=0;
    s = 0.0;
    int i = 0;
    
    while (i < n)
    {
        a=pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        s =s+ a;
        ++i;
    }
    return (s);
}
