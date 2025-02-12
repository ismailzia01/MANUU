//10. Display a multiplication table for a number.
import java.util.Scanner;
class Table {
    public static void main (String[] args) {
        System.out.print("Enter a Number to print the multiplication table of it : ");
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        for(int i = 1; i <= 10; i++) {
            System.out.println(num + "*" + i + " = " +(num*i));
        }
    }
}