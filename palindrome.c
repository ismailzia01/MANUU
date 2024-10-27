#include<stdio.h>

int main()
{
    int digit,num,reverse = 0,num1;
    printf("Enter a number :");
    scanf("%d",&num);
    num1 = num;                             //saving in num1 coz later num will get zero 
    while(num != 0)
    {
        digit = num % 10;                   //get the last digit
        reverse = reverse * 10 + digit;     //store in reverse // Logic to reverse the number
        num = num / 10;                     //remove the last digit
    }
    if(reverse == num1)
        printf("%d is a Palindrome number !",reverse);
    else
        printf("%d is not a Palindrome number !",num1); //notice how we used the num1 variable here 
    return 0;

}