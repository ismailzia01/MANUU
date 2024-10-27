#include<stdio.h>
#define N 5
int main()
{
    int a[N],*p;
    printf("Enter %d elements of Array \n",N);
    for(p=a; p<=a+N-1; p++)
    {
        scanf("%d",p);
    }
    printf("Elements in reverse order \n");
    for(p=a+N-1; p>=a; p--)
    {
        printf("%d ",*p);
    }
    return 0;
}