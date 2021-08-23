#include <stdio.h>

main()
{
    int i=10;
    char *p;
    p=&i;
    if(*p==10)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");
}
