#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_for.h"

double sum(int n)
{
    a = 0;
    s = 0.0;
    int i = 0;
    
    for(i=0;i<=n-1;i++)
    {
        a =pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        s = s + a;
        
    }
    return (s);
}
