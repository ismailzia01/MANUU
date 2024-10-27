#include<stdio.h>

int main()
{
    int num , fact = 1, result = 0,rem;
    printf("Enter a number :");
    scanf("%d",&num);
    int number = num;
    while(num != 0)
    {
        rem = num % 10;
        while(rem != 0)
        {
            fact *= rem;
            rem--;
        }
        result +=fact;
        num /= 10;
        fact = 1;
    }
    if(result == number)
    printf("%d is a strong number \n",number);
    else
    printf("%d is not a strong number \n",number);
    return 0;
}