//9. Reverse a number using a `while` loop.
import java.util.Scanner;
class RevNum {
    public static void main (String[] args) {
        System.out.print("Enter a Number : ");
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int rev = 0;
        int digit;
        while(num != 0){
            digit = num%10;
            rev = rev*10 + digit;
            num /= 10;
        }
        System.out.println("Reversed Number : " + rev);
    }
}