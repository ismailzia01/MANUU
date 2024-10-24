#include<iostream>
using namespace std;
#define MAX 50

int main()
{
    int matrixA[MAX][MAX],matrixB[MAX][MAX],result[MAX][MAX];
    int rowsA,columnA,rowsB,columnB;
    int i,j,k;
    int sum=0;
    cout << "Enter rows of first matrix    :";
    cin >> rowsA;
    cout << "\nEnter column of first matrix  :";
    cin >> columnA;
    cout << "\nEnter rows of second matrix   :";
    cin >> rowsB;
    cout << "\nEnter column of second matrix :";
    cin >> columnB;
    if(columnA != rowsB)
    cout << "Matrix multiplication is not possible !" << endl;
    else
    {
        cout << "\nEnter first matrix :" << endl;
        for(i=0; i<rowsA; i++)
        {
            for(j=0; j<columnA; j++)
            {
                cin >> matrixA[i][j];
            }
        }
        cout << "Enter second matrix :" << endl;
        for(i=0; i<rowsB; i++)
        {
            for(j=0; j<columnB; j++)
            {
                cin >> matrixB[i][j];
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
        cout << "Result :" << endl;
        for(i=0; i<rowsA; i++)
        {
            for(j=0; j<columnB; j++)
            {
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }

    }
    return 0;

}
