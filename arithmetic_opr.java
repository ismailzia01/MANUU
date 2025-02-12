//3. Perform addition, subtraction, multiplication, and division of two numbers.
import java.util.Scanner;
class Arithmetic {
    public static void main( String[] args) {
        Scanner input = new Scanner(System.in);
        int choice;
        do { 
            System.out.println("1) Addition ");
            System.out.println("2) Subtraction ");
            System.out.println("3) Multiplication ");
            System.out.println("4) Division ");
            System.out.println("5) Exit ");
            System.out.println("Enter your choice : ");
            choice = input.nextInt();
            switch (choice) {
                case 1 -> add();
                case 2 -> sub();
                case 3 -> mul();
                case 4 -> div();
                case 5 -> System.exit(0);
                default -> System.out.println("Invalid input ");
            }
        } while (choice != 5);
    }
    public static void add(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first number : ");
        int num1 = input.nextInt();
        System.out.print("Enter Second number : ");
        int num2 = input.nextInt();
        int sum = num1 + num2;
        System.out.println("Addition = " + sum);
    }
    public static void sub(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first number : ");
        int num1 = input.nextInt();
        System.out.print("Enter Second number : ");
        int num2 = input.nextInt();
        int dif = num1 - num2;
        System.out.println("Difference = " + dif);
    }
    public static void mul(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first number : ");
        int num1 = input.nextInt();
        System.out.print("Enter Second number : ");
        int num2 = input.nextInt();
        int mul = num1 * num2;
        System.out.println("Multiplication = " + mul);
    }
    public static void div(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter first number : ");
        int num1 = input.nextInt();
        System.out.print("Enter Second number : ");
        int num2 = input.nextInt();
        if(num2 != 0){
            int div = num1 / num2;
        System.out.println("Division = " + div);
        }
        else{
            System.out.println("Division is not possible ");
        }
    }
}