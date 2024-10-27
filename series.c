#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1,j;
    float s=0.0,fact;
    printf("Enter number of elements in series : ");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=1.0;
        for(j=1; j<=i; j++)
        {
            fact=fact*j;

        }
        s=s+i/fact;
        if(i!=n)
        printf("(%d/%d!)+",i,i);
        else
        printf("(%d/%d!)=",i,i);
        i++;


    }
    printf("%f",s);
    return 0;
    
}