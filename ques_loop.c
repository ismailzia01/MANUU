/*
    How many times will Hello,World be printed;
*/
#include<stdio.h>

int main()
{
    int i = 1024;
    for(; i; i>>=1)
    {
        printf("Hello,World!\n");
    }
    return 0;
}