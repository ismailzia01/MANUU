#include <stdio.h>
void swap(int *p , int *q)
{
    int temp=0;
    temp = *p;
    *p = *q;
    *q = temp;
    return ;
}

int main()
{
    int a , b;
    printf("Enter a and b :\n");
    printf("a :");
    scanf("%d",&a);
    printf("b :");
    scanf("%d",&b);
    printf("Before swap \n a = %d\n b = %d\n",a,b);
    swap(&a, &b);
    printf("After swap \n a = %d\n b = %d",a,b);
    return 0;
}