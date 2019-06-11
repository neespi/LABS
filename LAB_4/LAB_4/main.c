#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifdef LAB_4
void function(double *x, double *y, double *result)
{
    *result = (4-pow(*x,2))/2;
}

void writeArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void readArray(int *arr, int n)
{
    int i;
    
    for (i = 0; i < n; ++i)
        scanf("%d", arr + i);
}

void ShellSort(int *arr,int n)
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = arr[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < arr[j - step])
                    arr[j] = arr[j - step];
                else
                    break;
            }
            arr[j] = tmp;
        }
}

void sortStackArray(int *arr, int n)
{
    readArray(arr, n);
    printf("%d\n", n);
    writeArray(arr, n);
    ShellSort(arr, n);
    writeArray(arr, n);
}

int main()
{
    double x, y, result;
    int N = 5;
    int arr[5];
    
    int f = 1;
    for (int i = 0; i < f; ++i)
    {
        ++f;
        printf("\n Select number of task 1, 5 or 0 to end : ");
        switch (getchar())
        {
            case '1':
                
                sortStackArray(arr, N);
                getchar();
                
                continue;
                
            case '5':
                printf("\n");
                printf("x : ");
                scanf("%lf", &x);
                printf("y: ");
                scanf("%lf", &y);
                function(&x, &y, &result);
                printf("Function returned %.4lf\n\n", result);
                getchar();
                
                continue;
                
            case '0' :
                printf("end\n");
                f = f - 1;
                break;
            default:
                getchar();
                continue;
        }
        
        
    }
}
#endif
