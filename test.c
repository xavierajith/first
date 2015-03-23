#include <stdio.h>
#include <malloc.h>

void main()
{
    char *test;
    test = (char *)malloc(10);
    *test++ = 'c';
    *test++ = '\0';

    printf("0x%x Address in test \n",test);
    printf("0x%x Address of test \n",&test);
    printf("%s Value in test\n",*test);
}
