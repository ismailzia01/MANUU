#include <stdio.h>

int fun(int *p)
{
    if(*p == 0)
    printf("%d is neither odd nor even ",*p);
    if(*p % 2 == 0)
    printf("%d is even number ",*p);
    else
    printf("%d is odd number ",*p);
    return;
}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    fun(&num);
    return 0;
}