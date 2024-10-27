#include<stdio.h>
int add(int ,int);
int main()
{
    int num1,num2,sum;
    printf("Enter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
    sum = add(num1,num2);
    printf("Result = %d",sum);
}
int add(int a ,int b)
{
    return(a+b);
}