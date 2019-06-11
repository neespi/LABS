#include <stdlib.h>
#include <stdio.h>
#include "Header_2.h"


int main() {
    printf("Input number of task(1 or 2):\n");
    
    switch (getchar())
    {
        case '1':
            printf("Task 1:\n");
            double x, y;
            printf("Input x and then y:\n");
            scanf("%lf", &x);
            scanf("%lf", &y);
            if (IsAnArea(x, y)) {
                printf("belongs\n");
            }
            else {
                printf("do not belongs\n");
            }
            break;
            
        case '2':
            printf("Task 2:\nInput x:\n");
            scanf("%lf", &x);
            printf("result is: %f\n", f(x));
            break;
            
        default:
            printf("wrong task number\n");
    }
    
}
