
#include <stdio.h>
#include <math.h>
double f(double x) {
    double output;
    output = (((4-pow(x,2))/2));
    return output;
}
int main() {
    double x = 1.0;
    printf("x=%lf\n", x);
    printf("f(x)=%lf\n", f(x));
    
    printf("Input x:\n");
    scanf("%lf", &x);
    printf("x=%lf\n", x);
    printf("f(x)=%lf\n", f(x));
}
