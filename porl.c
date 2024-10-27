#include<stdio.h>
int main ()
{
    float Costprice,sellprice,Profit,Loss;
    printf("Enter cost price \n");
    scanf("%f",&Costprice);
    printf("Enter selling price \n");
    scanf("%f",&sellprice);
    if(sellprice>Costprice)
    {
        Profit=sellprice-Costprice;
        printf("Profit=%f",Profit);
    }
    else if(Costprice>sellprice)
    {
        Loss=Costprice-sellprice;
        printf("Loss=-%f",Loss);
    }
    else
    {
        printf("No profit no loss");
    }
        return 0;
}