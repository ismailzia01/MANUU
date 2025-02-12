//4. Check if a number is even or odd.
import java.util.Scanner;
class EvenOrOdd {
    public static void main(String[] args) {
        System.out.println("\t\t<<Check if number is even or odd >>");
        System.out.println();
        System.out.print("Enter a number : ");
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        if((num%2) == 0){
            System.out.println(num + " is an Even Number ");
        }
        else {
            System.out.println(num + " is an Odd Number ");
        }
    }
}