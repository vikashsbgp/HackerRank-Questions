#include<stdio.h>

int main()
{

    char *s[5]={"california","london","macau","milpitas","texas"};
    char **ptr[5]={s,s+1,s+2,s+3,s+4};
    char ***p=ptr;
    printf("%s", **++p);
    printf("%s", *--*++p+3);
    printf("%s", *(p[-2])+3);
    printf("%s", p[-1][-1]+1);
    printf("%s", **p++);
    //printf("%s", ***++p+2);
}
