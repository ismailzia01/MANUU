#include<stdio.h>
//What is the output of the following C code ?
//Assume that the address of x is 2000 (in decimal) and an integer require four bytes of memory;
int main()
{
    unsigned int x[4][3] ={ {1,2,4},{4,5,6},
                            {7,8,9},{10,11,12}};
    printf("%u %u %u",x+3,*(x+3),*(x+2)+3);
    return 0;
}