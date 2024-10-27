#include<stdio.h>

int main()
{
    char var = 3; // NOTE: 3 in binary is (0 0 0 0  0 0 1 1)
    printf("%d",var>>1);
    return 0;
}