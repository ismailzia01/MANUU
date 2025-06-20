#include<stdio.h>

void add();
void sub();
void mul();
void div();

int main()
{
    int choice;
    //display menu 
    printf("----SIMPLE CALCULATOR----\n");
    printf("chose an option \n");
    printf("1 ) Addition \n");
    printf("2 ) Subtracton \n");
    printf("3 ) Multiplication \n");
    printf("4 ) Division \n");
    printf("5 ) Exit \n");
    while(1)
    {
        printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: add();
            break;
            case 2: sub();
            break;
            case 3: mul();
            break;
            case 4: div();
            break;
            case 5: printf("Existing the program ....!\n");
            return 0;
            default : printf("invalid choice . Please try again \n");
            
        }

    }
}
//Adds to numbers
void add()
{
    double num1,num2;
    printf("Enter two numbers \n");
    scanf("%lf\n%lf",&num1,&num2);
    printf("Result :%.2lf \n",num1+num2);
}

void sub()
{
    double num1,num2;
    printf("Enter two numbers \n");
    scanf("%lf\n%lf",&num1,&num2);
    printf("Result :%.2lf \n",num1-num2);
}

void mul()
{
    double num1,num2;
    printf("Enter two numbers \n");
    scanf("%lf\n%lf",&num1,&num2);
    printf("Result :%.2lf \n",num1*num2);
}

void div()
{
    double num1,num2;
    printf("Enter two numbers \n");
    scanf("%lf\n%lf",&num1,&num2);
    if(num2!=0)
    {
        printf("Result :%.2lf \n",num1/num2);
    }
    else
    {
        printf("undefined\n");
    }
}

