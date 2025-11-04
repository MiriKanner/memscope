#include <stdlib.h>

void test_memory()
{
    int *a = (int *)malloc(100); //first allocation
    int *b = (int *)malloc(200); //second allocation

    free(a); //free first allocation

}
