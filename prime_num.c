#include<stdio.h>

int main()
{
    int num , i , count = 0 , result;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        result = num % i;
        if(result == 0)
        {
            count++;
        }
    }
    if(count == 2)
    printf("%d is a Prime Number \n",num);
    else
    printf("%d is not a Prime Number \n",num);
    return 0;
}