
#include<stdio.h>
int main()
{
    int a[10][10],i,j,k,n;
    printf("Enter no. of lines :");
    scanf("%d",&n);
    for(i=0; i<n ;i++)
    {

        for(j=0; j<=i; j++)
        {
            if(j==0 || i==j)
            a[i][j]=1;
            else
            a[i][j]=a[i-1][j-1]+a[i-1][j];

        }
    }
    printf("                                --Pascal Triangle--\n\n");
    for(i=0; i<n; i++)
    {
        for(k=1; k<=n-i; k++)
        {
            printf("\t");
        }
        for(j=0; j<=i; j++)
        {
            printf("%d\t\t",a[i][j]);

        }
        printf("\n");
    }
    return 0;
}
