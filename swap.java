import java.util.Scanner;
public class swap {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first Number : ");
        int num1 = input.nextInt();
        System.out.print("Enter second Number : ");
        int num2 = input.nextInt();
        System.out.println("Before Swap \tnum1 = " + num1 + "\tnum2 = " + num2);
        num1 = num1^num2;
        num2 = num1^num2;
        num1 = num1^num2;
        // num1 = num1+num2
        // num2 = num1-num2
        // num1 = num1-num2
        System.out.println("After Swap \tnum1 = " + num1 + "\tnum2 = " + num2);
    }
}
