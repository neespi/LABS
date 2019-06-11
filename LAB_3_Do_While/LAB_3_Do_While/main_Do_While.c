#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "header_do_while.h"
#ifdef LAB_3_DW
int main()
{
    double r;
    printf("Lets chose number of task:\n1-Task1.\n2-Task2.\n3-Task3.\n4-Task4.\n5-Task5.\n");
    switch(getchar())
    {
        case '1':
            printf("Task1:\n");
            printf("Input n:\n");
            scanf("%i", &n);
            printf("n=%i\n", n);
            r=sum(n);
            printf("sum=%1f/n",r);
            break;
        case '2':

            printf("Task2:\n");
            printf("Input eps:\n");
            scanf("%lf", &eps);
            printf("eps=%lf\n", eps);
            r=sum2(eps);
            printf("sum2=%1f/n",r);
            break;
        case '3':
            printf("Task3:\n");
            printf("Input n:\n");
            scanf("%i", &n);
            printf("Input k:\n");
            scanf("%i", &k);
            print(n, k);
            break;
        case '4':
            printf("Task4:\n");
            printf("Input eps:\n");
            scanf("%lf", &eps);
            printf("eps=%lf\n", eps);
            r=LetsFindFirstElement(eps);
            printf("First Element=%1f/n",r);
            break;
        case '5':
            printf("Task5:\n");
            printf("Input eps:\n");
            scanf("%lf", &eps);
            printf("eps=%lf\n", eps);
            r=LetsFindFirstNegativeElement(eps);
            printf("First Negative Element=%1f/n",r);
            break;
        default:
            printf("Unavalible var\n");
            break;
    }
}
#endif
