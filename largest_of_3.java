//5. Find the largest of three numbers using `if-else`.
import java.util.Scanner;
class Largest {
    public static void main (String[] args) {
        System.out.print("Enter three numbers : ");
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        int num3 = input.nextInt();

        if(num1 > num2) {
            if(num1 > num3) {
                System.out.println(num1 + " is the largest among the three numbers " );
            }
            else {
                System.out.println(num3 + " is the largest among the three numbers " );
            }
        }
        else {
            if(num2 > num3){
                System.out.println(num2 + " is the largest among the three numbers " );
            }
            else {
                System.out.println(num3 + " is the largest among the three numbers " );
            }
        }
    }
}