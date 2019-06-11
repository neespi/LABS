#include <stdio.h>
#include <math.h>

double x, result;

void f() {
    double output;
    output = (((4-pow(x,2))/2));
    return output;
}

void main() {
    
    x = 1.0;
    printf("x=%lf\n", x);
    printf("f(x)=%lf\n", x, result);
    
    printf("Input x:\n");
    scanf("%lf", &x);
    printf("x=%lf\n", x);
    printf("f(x)=%lf\n", x, result);
    
}

