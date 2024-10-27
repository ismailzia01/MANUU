#include<stdio.h>

int main()
{
    int a[]={12,45,75,84,62};
    int sum=0, *p;
    for(p=&a[0]; p<=&a[4]; p++)
    {
        sum += *p;
    }
    printf("Sum is %d",sum);
    return 0;
}