#include<stdio.h>
#define N 10
void minMax(int a[N], int len, int *min, int *max)
{
    *min=*max=a[0];
    int i;
    for(i=1; i<len; i++)
    {
        if(*min>a[i])
        *min=a[i];
        if(*max<a[i])
        *max=a[i];
    }
}
int main()
{
    int a[N],min,max,len,i;
    printf("Enter array elements :\n");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    minMax(a , len , &min , &max);
    printf("Min : %d",min);
    printf("\nMax : %d",max);
    return 0;
}