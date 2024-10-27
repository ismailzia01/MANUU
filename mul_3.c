#include <stdio.h>
int mul(int *p)
{
    int i;
    int result =1;
    for(i=1; i<=10; i++)
    {
        result = *p*i;
        printf("%d x %d = %d\n",*p,i,result);
    }
}

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    mul(&num);
    return 0;
}