import java.util.Scanner;
import java.util.random.*;
public class randome {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the range of value wants to print random number : ");
        System.out.print("Enter the minimum range : ");
        int min = input.nextInt();
        System.out.print("Enter the maximum range of number : ");
        int max = input.nextInt();
        int r = (int) (Math.random()*(max-min+1)+min);
        System.out.println("Random Number between " + min + " to " + max + " is " + r);
        input.close();
    }
}
