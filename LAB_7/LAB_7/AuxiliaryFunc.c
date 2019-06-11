#include <stdlib.h>
#include <stdio.h>
#include "AuxiliaryFunc.h"

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

int my_strlen(const char *str)
{
    int count = 0;
    int i = 0;
    while (str[i] != 0)
    {
        count++;
        i++;
    }
    return count;
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

int mine_strlen(const char* c_str)
{
    int count=0;
    while(*c_str++) ++count;
    return count;
}

char *find( char *c_str,  char *substr) {
    int lenс_Str = my_strlen(c_str);
    int lenSub = my_strlen(substr);
    
    for (int i = 0; i <= lenс_Str - lenSub; ++i) {
        int j;
        for (j = 0; c_str[i + j] == substr[j]; ++j);
        if (j - lenSub == 1 && i == lenс_Str - lenSub) return &c_str[i] ;
        
    }
    return 0;
}

