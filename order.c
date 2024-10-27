/*The policy followed by a company to process customer order is given by the following rules:
(a) If customer orderis less than or equal to that in stack.
(b) If credit is not ok=> don't supply and send him intimation.
(c) if credit is ok and the item in the stock and intimate him that the remaining order will be shipped later.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int stock=100,credit,order;
    printf("\n\t\tWelcome to MANUU order system");
    printf("\n\t\t_____________________________\n\n");
    printf("\n\t\tEnter credit amount :  ");
    scanf("%d",&credit);
    printf("\n\t\tEnter order value :  ");
    scanf("%d",&order);
    if(credit==0)
    {
        system("cls");
        printf("\n\t\tWelcome to MANUU order system");
        printf("\n\t\t_____________________________\n\n");
        printf("\n\t\torder can't be delivered");

    }
    else if(order<=stock)
    {
        system("cls");
        stock=stock-order;
        printf("\n\t\tWelcome to MANUU order system");
        printf("\n\t\t_____________________________\n\n");
        printf("\n\t\tOrder will be delivered shortly");
        printf("\n\t\tRemaining stocK : %d\n",stock);

    }
    else if(order>stock)
    {
        stock=stock-order;
        system("cls");
        return 0;
        printf("\n\t\tWelcome to MANUU order system");
        printf("\n\t\t_____________________________\n\n");
        printf("\n\t\t%d will be delivered shortly",stock);
        printf("\n\t\t%d will be dilivered soon",-stock);

    }
    return 0;

}