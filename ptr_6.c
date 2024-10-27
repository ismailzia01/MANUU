#include<stdio.h>
//sum of array elements;
int main()
{
    int a[]={12,45,14,13,35,62,74};
    int sum=0, *p;
    for(p=a; p<=a+5; p++)
        sum+=*p;
    printf("Sum is %d",sum);
    return 0;
}