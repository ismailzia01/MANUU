//write a program which read a sequence of positive integers  
//the program stops when the user enter a negative number
//and show the maximum and minimum sum ;
import java.util.Scanner;
class Max_Min {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = 0;
        int max = 0;
        int min = 0;
        do {
            System.out.print("Enter a number : ");
            num = input.nextInt();
            int max = num;
            int min = num;
        } while(num < 0);
    }
}