import java.util.Scanner;
public class isPalindrome {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a Number : ");
        int num = input.nextInt();
        int rev = 0;
        int digit = 0;
        int original = num;
        while(num!=0) {
            digit = num%10;
            rev = rev*10 + digit;
            num /= 10;
        }
        if(original==rev)
            System.out.println(original + " is a Palindrome Number ");
        else
            System.out.println(original + " is not a Palindrome Number ");
    }
}
