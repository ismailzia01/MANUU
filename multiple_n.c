
#include<stdio.h>

int main()
{
    int i , n , r;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        r = n * i;
        printf("%d ,",r);
    }
    return 0;
}