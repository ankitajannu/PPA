#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Python";
    char *str = Arr;

    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }

    return 0;
}