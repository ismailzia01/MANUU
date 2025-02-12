//15. Perform matrix addition and multiplication.
import java.util.Scanner;
class MatMul {
    public static void main (String[] args) {
        System.out.print("Enter the row of the First Matrix     : ");
        Scanner input = new Scanner(System.in);
        int row1 = input.nextInt();
        System.out.print("Enter the row of the Second Matrix    : ");
        int row2 = input.nextInt();
        System.out.print("Enter the column of the First Matrix  : ");
        int column1 = input.nextInt();
        System.out.print("Enter the column of the column Matrix : ");
        int column2 = input.nextInt();
        if(row2 != column1) {
            System.out.println("Matrix multiplication is not possible ! ");
        }
        else {
            System.out.println("Enter the elements of the first matrix ");
            int[][] matrixA = new int[row1][column1];
            for(int i = 0; i < row1; i++){
                for(int j = 0; j < column1; j++) {
                    matrixA[i][j] = input.nextInt();
                }
            }
            System.out.println("Enter the elements of the second matrix ");
            int[][] matrixB = new int[row1][column1];
            for(int i = 0; i < row2; i++){
                for(int j = 0; j < column2; j++) {
                    matrixB[i][j] = input.nextInt();
                }
            }
            int[][] matrixC = new int[row1][column1];
            for(int i = 0; i < row1; i++) {
                for(int j = 0; j < column2; j++) {
                    for(int k = 0; k < row1; k++) {
                        matrixC[i][j] += matrixA[i][k]*matrixB[k][j];
                    }
                }
            }
            System.out.println("Multiplication :");
            for(int i = 0; i < row1; i++){
                for(int j = 0; j < column2; j++) {
                    System.out.print(matrixC[i][j] + " ");
                }
                System.out.println();
            }
        }


    }
}