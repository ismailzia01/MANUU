#include<stdio.h>
//What will be the output of the following program;

int main()
{
    int a[]={12,45,75,84,63,23,32};
    int *p=&a[1], *q=&a[5];
    printf("%d ",*(p+3));
    printf("%d ",*(q-3));
    printf("%d ",q-p);
    printf("%d ",p<q);
    printf("%d ",*p<*q);
    return 0;
}