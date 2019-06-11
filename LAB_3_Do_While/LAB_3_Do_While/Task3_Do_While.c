#include <math.h>
#include <stdio.h>
#include <locale.h>
#include "header_do_while.h"

void print(int n, int k) {
    int i = 0;
    do
    {
        if (i == k)
        {
            ++i;
            continue;
        }
        a = pow(-1,i)*(1)/((double)((i+1)*(i+2)*(i+3)));
        printf("%f\n", a);
        ++i;
    } while (i < n - 1);
}
