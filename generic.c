#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99;
    double d = 90.9876;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = NULL;
    
    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);

    vp = &ch;
    printf("%c\n",*(char *)vp);

    vp = &i;
    printf("%d\n",*(int *)vp);

    return 0;
}