#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int my_strlen(const char* c_str)
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

void delete( char *c_str,  char *substr)
{
    int i = 0;
    int j;
    int substr_length = my_strlen(substr);
    char *index = find(c_str, substr);
    if (index == NULL)
        return;
    int f = 1;
    for (int i = 0; i < f; ++i)
    {
        ++f;
        index[i] = index[substr_length + i];
        if (index[substr_length + i] == 0)
            break;
    }
    
    for (j = 1; j < substr_length; j++)
    {
        index[i + j] = 0;
    }
}

void my_strcpy(char *dest, int len, const char *src)
{
    int i = 0;
    
    for (i = 0; i < len - 1; i++)
    {
        dest[i] = src[i];
        if (src[i] == 0)
            return;
    }
    dest[i] = 0;
}

void my_strcat(char* dest, int len, const char* first, const char* second) {
    int i;
    dest[len - 1] = '\0';
    for (i = 0; dest[i] != '\0'; ++i) {
        if (first[i] != '\0') {
            dest[i] = first[i];
        }
        else
        {
            dest[i] = second[i];
        }
    }
}
_Bool insert(const char *src, const char *str, int index, char *dest, int len)
{
    int i = 0;
    int j = 0;
    
    if ((my_strlen(src) + my_strlen(str) + 1 > len) || (index < 0 || index > my_strlen(src) - 1))
        return 0;
    
    while (i < index)
    {
        dest[i] = src[i];
        i++;
    }
    while (str[j] != 0)
    {
        dest[i] = str[j];
        i++;
        j++;
    }
    j = index;
    while (src[j] != 0)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = 0;
    return 1;
}
    
int main()
{
    char c_str[100];
    char substr[100];
    char buffstr[500];
    
    printf("str: ");
    gets(c_str);
    printf("substr: ");
    gets(substr);
    int f = 1;
    for (int i = 0; i < f; ++i)
    {
        f=6;
    
        printf("\nInput number of task:\n1.Str length\n2.substr in the str\n3.Del substr in str\n4.str concatenation\n5.insert substr to string\n6.Insert line in line\n\n");
        switch (getchar())
        {
            case '1':
            printf("%d\n", my_strlen(c_str));
            getchar();
            continue;
            
            case '2':
            printf("%s\n", find(c_str, substr));
                //if (find(c_str, substr) != NULL)
            //printf("\n position #%ld in str\n\n", find(c_str, substr) - c_str + 1);
            getchar();
            continue;
         
            case '3':
            delete(c_str, substr);
            printf("string content: %s\n\n", c_str);
            getchar();
            continue;
            
            case '4':
            my_strcpy(buffstr, 200, c_str);
            printf("with non-limit buffer length(500)");
            printf("\nbuffstr content %s", buffstr);
            my_strcpy(buffstr, my_strlen(c_str) / 2 + 1, c_str);
            printf("\nwith limit buffer length (%d)", my_strlen(c_str) / 2 + 1);
            printf("\nbuffstr content: %s\n\n", buffstr);
            getchar();
            continue;
            
            case '5':
            my_strcat(buffstr, 500, c_str, substr);
            printf("non-limit buffer length (500)");
            printf("\nbuffstr content: %s", buffstr);
            my_strcat(buffstr, my_strlen(c_str) + my_strlen(substr) / 2, c_str, substr);
            printf("\nlimit buffer length (%d)", my_strlen(c_str) + my_strlen(substr) / 2);
            printf("\nbuffstr content: %s\n\n", buffstr);
            getchar();
            continue;
            
            case '6':
            printf("using non-limit buffer length (500) & correct index (%d)", my_strlen(c_str) / 2);
            printf("\n%s", insert(c_str, substr, my_strlen(c_str) / 2, buffstr, 500) ? "true" : "false");
            printf("\nbuffstr content: %s", buffstr);
            printf("\nusing limit buffer length value (%d)", (my_strlen(c_str) + my_strlen(substr)) / 4 * 3);
            printf("\nreturned %s", insert(c_str, substr, my_strlen(c_str) / 2, buffstr, (my_strlen(c_str) + my_strlen(substr)) / 4 * 3) ? "true" : "false");
            printf("\nincorrect index (%d)", my_strlen(c_str) + 5);
            printf("\nreturned %s\n\n", insert(c_str, substr, my_strlen(c_str) + 5, buffstr, 500) ? "true" : "false");
            continue;
        }
    }
}
