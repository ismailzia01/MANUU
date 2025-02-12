//2. Display your name and age using `System.out.println`.
import java.util.Scanner;
class NA {
    public static void main (String[] args) {
        System.out.print("Enter your Name : ");
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();
        System.out.print("Enter your age : ");
        int age = s.nextInt();
        System.out.println("Your name is " + name);
        System.out.println("Your age is " + age);
    }
}