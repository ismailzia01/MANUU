//Making a Tic Tac Toe from Scratch
import java.util.Scanner;
class TicTacToe {
    static int[][] mat = new int[3][3];//Game Board 3x3
    static int turn = 1;//Player 1 for X and 2 for O  (Player X starts)
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(true) {
            printBoard();
            System.out.print("Player " + (turn==1?'X':'O') + "'s turn : ");
            inputmove(input);
            if(checkWin()){
                printBoard();
                System.out.println("Player " + (turn==1?'X':'O') + " Win");
                break;//End the game if any player win
            }
            if(isBoardFull()){
                printBoard();
                System.out.println("It's a Draw !");
                break;
            }
            changeTurn();//change the turn from player 'x' to player 'o'
        }
        System.out.print("Result : " + checkWin());

    }
    public static void printBoard() {
        System.out.println("Current Board : ");
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                char symbol = mat[i][j]==0 ? '_' : (mat[i][j] == 1 ? 'X':'O');
                System.out.print(symbol + " ");
            }
        }
    }
    public static void changeTurn() {
        turn = (turn==1)?2:1;
    }
    public static void inputmove(Scanner input) {
        int i,j;
        while(true) {
            System.out.print("Enter Row(0-2) : ");
            i = input.nextInt();
            System.out.print("Enter Column(0-2)");
            j = input.nextInt();
            if(i >=0 && i < 3 && j >= 0 && j < 3 && mat[i][j]==0) {
                mat[i][j] = turn;
                break;//move is valid 
            }
            else {
                System.out.println("Invalid move ");
            }
        }
    }
    public static boolean checkWin() {
        for(int i = 0; i < 3; i++) {
            if(mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2] && mat[i][0]!=0)
                return true;//row win condition
        }
        for(int i = 0; i < 3; i++) {
            if(mat[0][i] == mat[1][i] && mat[1][i] == mat[2][i] && mat[0][i]!=0)
                return true;//Column win condition
        }
        if(mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2] && mat[0][0]!=0)
            return true;//major diagonal win condition
        if(mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0] && mat[0][2]!=0)
            return true;//minor diagonal win condition
        return false;//no win condition matched
    }
    public static boolean isBoardFull() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(mat[i][j]==0)
                    return false;//Board is not full;
            }
        }
        return true;//Board is full
    }
}