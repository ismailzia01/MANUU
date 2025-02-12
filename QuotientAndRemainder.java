import java.util.Scanner;

public class QuotientAndRemainder {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the Divident value : ");
        int D = input.nextInt();
        System.out.print("Enter the Divisor value : ");
        int d = input.nextInt();
        int remainder = D%d;
        int quotient = D/d;
        System.out.println("Remainder : " + remainder);
        System.out.println("Quotient : " + quotient);
        input.close();
    }
}
