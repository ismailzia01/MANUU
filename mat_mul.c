#include<stdio.h>
#define MAX 50

int main()
{
    int matrixA[MAX][MAX],matrixB[MAX][MAX],result[MAX][MAX];
    int rowsA,columnA,rowsB,columnB;
    int i,j,k;
    int sum=0;
    printf("Enter rows of first matrix    :");
    scanf("%d",&rowsA);
    printf("Enter column of first matrix  :");
    scanf("%d",&columnA);
    printf("Enter rows of second matrix   :");
    scanf("%d",&rowsB);
    printf("Enter column of second matrix :");
    scanf("%d",&columnB);
    if(columnA != rowsB)
    printf("Matrix multiplication is not possible !");
    else
    {
        printf("Enter first matrix :\n");
        for(i=0; i<rowsA; i++)
        {
            for(j=0; j<columnA; j++)
            {
                scanf("%d",&matrixA[i][j]);
            }
        }
        printf("Enter second matrix :\n");
        for(i=0; i<rowsB; i++)
        {
            for(j=0; j<columnB; j++)
            {
                scanf("%d",&matrixB[i][j]);
            }
        }
        for(i=0; i<rowsA; i++)
        {
            for(j=0; j<columnB; j++)
            {
                for(k=0; k<rowsA; k++)
                {
                    sum +=matrixA[i][k]*matrixB[k][j];
                }
                result[i][j]=sum;
                sum=0;
            }

        }
        printf("Result :\n");
        for(i=0; i<rowsA; i++)
        {
            for(j=0; j<columnB; j++)
            {
                printf("%d  ",result[i][j]);
            }
            printf("\n");
        }

    }
    return 0;

}
