#include <stdlib.h>
#include <stdio.h>
#include "AuxiliaryFunc.h"

void incrementHeapVariable() {
    int* p = (int*)malloc(sizeof(int));
    *p = 10;
    printf("%p %d", p, *p);
    *p += 1;
    printf("%p %d", p, *p);
}

void sortHeapArray(int *arr,int n) {
        readArray(arr, n);
        printf("%d\n", n);
        writeArray(arr, n);
        ShellSort(arr, n);
        writeArray(arr, n);
}

char *delete(char *str, char *substr)
{
    int i = 0;
    int j = 0;
    int str_length = mine_strlen(str);
    int substr_length = mine_strlen(substr);
    char *index = find(str, substr);
    char *newstr;
    if (index == NULL)
        return NULL;
    newstr = (char *)malloc(str_length - substr_length + 1);
    for (;;)
    {
        if (str + i == index)
            break;
        newstr[i] = str[i];
        i++;
    }
    for (;;)
    {
        newstr[i] = index[substr_length + j];
        if (index[substr_length + i] == 0)
            break;
        i++;
        j++;
    }
    return newstr;
}

char *mine_strcpy(const char *src)
{
    int i = 0;
    int len = mine_strlen(src);
    char *newstr = (char *)malloc(len * sizeof(char) + 1);
    for (i = 0; i < len; i++)
    {
        newstr[i] = src[i];
    }
    return newstr;
}

char *mine_strcat(const char *first, const char *second)
{
    int i = 0;
    int first_length = mine_strlen(first);
    int second_length = mine_strlen(second);
    char *newstr = (char *)malloc((first_length + second_length) * sizeof(char) + 1);
    for (i = 0; i < first_length; i++)
    {
        newstr[i] = first[i];
    }
    for (i = 0; i < second_length; i++)
    {
        newstr[first_length + i] = second[i];
    }
    newstr[first_length + i] = 0;
    return newstr;
}

char *insert(const char *src, const char *str, int index)
{
    int i = 0;
    int j = 0;
    char *newstr = (char *)malloc((mine_strlen(src) + mine_strlen(str)) * sizeof(char) + 1);
    while (i < index)
    {
        newstr[i] = src[i];
        i++;
    }
    while (str[j] != 0)
    {
        newstr[i] = str[j];
        i++;
        j++;
    }
    j = index;
    while (src[j] != 0)
    {
        newstr[i] = src[j];
        i++;
        j++;
    }
    newstr[i] = 0;
    return newstr;
}

int main()
{
    int N;
    int *arr;
    printf("razmer stroki:\n");
    scanf("%d", &N);
    arr = (int *)malloc(N * sizeof(int));
    sortHeapArray(arr, N);
    free(arr);
    incrementHeapVariable();
    getchar();
    printf("\n\n");
}

