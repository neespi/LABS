#include <stdio.h>
#include <math.h>

extern double x, result;
extern void f();

void main() {
	x = 1.0;
	printf("x=%lf\n", x);
	f();
	printf("f(x)=%lf\n", result);
	printf("Input x:\n");
	scanf("%lf", &x);
	printf("x=%lf\n", x);
	f();
	printf("f(x)=%lf\n", result);
}
