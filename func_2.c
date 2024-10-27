#include<stdio.h>
int fun(int *ptr1 , int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 10;
    return 1;
}
int main()
{
    int m = 10 , n = 20;
    fun(&m , &n);
    printf("%d\n%d",m,n);
}