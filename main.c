#include <stdio.h>
#include <stdlib.h>

void swap(int* a,int* b)
{
        *a=*a ^ *b;
        *b=*a ^ *b;
        *a=*a ^ *b;
}
int main()
{
    int* pa,pb;
    int a,b;
    a=1;
    b=3;
    pa=&a;
    pb=&b;
    printf("a=%d, b=%d\n", a, b);
    swap(pa, pb);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
