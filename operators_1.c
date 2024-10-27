#include<stdio.h>

int main()
{
    int var = 5;
    int num = sizeof(var++);
    printf("%d\n%d",var,num);
    return 0;
}