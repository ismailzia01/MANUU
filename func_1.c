#include<stdio.h>
int fun(int x , int y)
{
    x = 20;
    y = 10;
    return 1;
}
int main()
{
    int m = 10 , n = 20;
    fun(m,n);
    printf("%d\n%d",m,n);
}