#include <stdio.h>
#include <math.h>

int main() {
    
    double x = 1.0;
    printf("x=%lf\n", x);
    printf("f(x)=%lf\n", ((4-pow(x,2))/2));
    
    printf("Input x:\n");
    double x2;
    scanf("%lf", &x2);
    printf("x=%lf\n", x2);
    printf("f(x)=%lf\n", ((4-pow(x,2))/2));
    
}
