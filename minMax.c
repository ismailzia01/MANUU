#include<stdio.h>
#define N 10

int main()
{
    int a[N];
    int i;
    //int min=a[0],max=a[0];
    printf("Enter the elements of array :\n");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0];
    for(i=1; i<N-1; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Min  :%d\n",min);
    printf("Max  :%d",max);
    return 0;

}