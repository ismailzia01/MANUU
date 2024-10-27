#include<stdio.h>

int main()
{
    int i = 3;
    if(i == 2); i = 0;
    if(i == 3) i++;
    else i+=2;
    printf("%d",i);
    return 0;
}