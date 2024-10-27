#include<stdio.h>
int main()
{
    int n,o=0,r,pv=1;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%8;
        o=o+r*pv;
        pv=pv*10;
        n=n/8;
    }
    printf("Octal equivalent is: %d",o);
    return 0;
}