
#include <stdio.h>
#include <math.h>
#include "task_5_f.c"

void main() {
	double x = 1.0;
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", f(x));
	printf("Input x:\n");
	scanf("%lf", &x);
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", f(x));
}
#endif
