#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d>%d",a,b);
    else
    printf("%d>%d",b,a);
    return 0;
}