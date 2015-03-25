 #include <stdio.h>
#include <malloc.h>

//changing something
void main()
{
    //bug fix from fix-headers
    char *test;
    test = (char *)malloc(10);
    *test++ = 'c';

    printf("0x%x Address in test \n",test);
    printf("0x%x Address of test \n",&test);
    printf("%s Value in test\n",*test);

    experiment();
}
//modifiying from fix-header branch

int experiment()
{
    //this is dummy function
    return -1 ;
}
