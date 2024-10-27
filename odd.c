#include<stdio.h>

int main()
{
    int i ,n =1 ;
    printf("%d",n);
    for(i=1; i<=24; i++)
    {
        n += 2;
        printf(", %d",n);
    }
    return 0;
}