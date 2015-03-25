#include <stdio.h>
#include <malloc.h>

//changing something
void main()
{
    char *test;
    test = (char *)malloc(10);
    *test++ = 'c';
    //malloc bug fix
    printf("0x%x Address in test \n",test);
    printf("0x%x Address of test \n",&test);
    printf("%s Value in test\n",*test);
}
