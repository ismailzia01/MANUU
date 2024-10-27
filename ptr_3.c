#include<stdio.h>

int main()
{
    int a[]={2,4,5,6,7,8};
    int *p=&a[3];
    int *q=&a[5];
    printf("%d\n",p<q);
    printf("%d\n",q<p);
    q=&a[3];
    printf("%d",p==q);
    return 0;
}