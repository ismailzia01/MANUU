/* Write a Program to input basic salary of an employe & calculate the gross salary as follows :
Basic salary<=10000 :- HRA=20% & DA=80%
Basic salary<=20000 :- HRA=25% & DA=90%
Basic salary<=20000 :- HRA=30% & DA=95%
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float bs,hra,da,gs;
    printf("Enter basic salary of an employ: ");
    scanf("%f",&bs);
    if(bs<=10000)
    {
        hra=0.20*bs;
        da=0.80*bs;
    } 
    if(bs<=20000)
    {
        hra=0.25*bs;
        da=0.90*bs;

    }
    if(bs>20000)
    {
        hra=0.30*bs;
        da=0.95*bs;
    }
    gs=bs+hra+da;
    printf("Gross salary is %f",gs);
    return 0;
}