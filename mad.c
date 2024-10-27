#include<stdio.h>
//#include<conio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,k,j,r1,r2,c1,c2;
    //clrscr();
    printf("Enter no. of rows :");
    scanf("%d%d",&r1,&c1);
    printf("Enter no.of column :");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter Matrix A :");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter Matrix B :");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                c[i][j]=0;
                for(k=0; k<c1; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Matrix C :");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d",c[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("Matrix multiplication is not possible with given size ");
    }
    //getch();
    return 0;
}
