#include <stdio.h>

struct Test
{
    int num;
    char *pcName;
    short Date;
    char cha[2];
    short Ba[4];
}*p;

int main()
{
    p=(struct Test*)0x100000;
    printf("%p\n",p + 0x1);
    printf("%p\n",(unsigned long)p + 0x1);
    printf("%p\n",(unsigned int *)p + 0x1);
    return 0;
}