#include <stdio.h>
#include <malloc.h>

char *test;
void main()
{
    test = (char *)malloc(10);
    *test++ = 'c';
    *test++ = '\0';

    printf("0x%x Address in test \n",test);
    printf("0x%x Address of test \n",&test);
    printf("%s Value in test\n",*test);
}
