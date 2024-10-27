#include<stdio.h>
int main()
{
    int n1,n2,gcd;
    printf("Enter first no. : ");
    scanf("%d",&n1);
    printf("\nEnter second no. :");
    scanf("%d",&n2);
    while(1)
    {
        if(n1>n2)
        {
            gcd=n1%n2;
            if(gcd==0)
            {
                printf("gcd is %d",n2);
                break;

            }
            n1=n2;
            n2=gcd;
            
        }
        else if(n2>n1)
        {
            gcd=n2%n1;
            if(gcd==0)
            {
                printf("gcd is %d",n1);
                break;
            }
            n1=n2;
            n2=gcd;
        }
        else
        {
            gcd=n1=n2;
        printf("gcd is %d",gcd);
        break;
        }
    }
    return 0;
    

}