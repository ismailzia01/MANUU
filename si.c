//Calcilate Simple interest using C program 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float SI,p,r,t;
    printf("Enter principle amount :");
    scanf("%f",&p);
    printf("Enter rate :");
    scanf("%f",&r);
    printf("Enter time period :");
    scanf("%f",&t);
    SI=(p*r*t)/100;
    printf("SI=%f",SI);
    return 0;
    }